/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumarin <aumarin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 01:02:12 by Aure              #+#    #+#             */
/*   Updated: 2022/01/15 03:09:03 by aumarin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if (c == 0)
		return ((char *)(s + len));
	while (--len >= 0)
	{
		if ((unsigned char)s[len] == (unsigned char)c)
			return (((char *)(s + len)));
	}
	return (NULL);
}
