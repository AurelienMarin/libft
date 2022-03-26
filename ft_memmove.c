/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumarin <aumarin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 12:38:36 by Aure              #+#    #+#             */
/*   Updated: 2022/01/15 04:42:24 by aumarin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*char_dst;
	const char	*char_src;
	size_t		i;

	char_dst = dst;
	char_src = src;
	i = -1;
	if (char_dst < char_src)
	{
		while (++i < len)
			char_dst[i] = char_src[i];
	}
	else if (char_dst > char_src)
	{
		while (++i < len)
			char_dst[len - 1 - i] = char_src[len - 1 - i];
	}
	return (dst);
}
