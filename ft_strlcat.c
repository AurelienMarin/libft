/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumarin <aumarin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 03:07:31 by aumarin           #+#    #+#             */
/*   Updated: 2022/01/14 23:40:04 by aumarin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (size < dst_size)
		return (src_size + size);
	else
	{
		dst = dst + dst_size;
		ft_strlcpy(dst, src, size - dst_size);
		return (dst_size + src_size);
	}
}
