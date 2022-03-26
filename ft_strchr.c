/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumarin <aumarin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 00:51:02 by Aure              #+#    #+#             */
/*   Updated: 2022/01/15 03:10:04 by aumarin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	if (c == 0)
		return ((char *)((s + ft_strlen(s))));
	while (s[++i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)((s + i)));
	}
	return (NULL);
}
