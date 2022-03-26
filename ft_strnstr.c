/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumarin <aumarin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 21:37:27 by Aure              #+#    #+#             */
/*   Updated: 2022/01/15 01:57:05 by aumarin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;

	i = 0;
	if (*needle == 0 || haystack == needle)
		return ((char *)(haystack));
	needle_len = ft_strlen(needle);
	while (haystack[i] && needle_len <= len--)
	{
		if (!ft_strncmp(haystack + i, needle, needle_len))
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
