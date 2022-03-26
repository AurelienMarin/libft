/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumarin <aumarin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 23:14:40 by aumarin           #+#    #+#             */
/*   Updated: 2022/01/15 04:41:32 by aumarin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calculate_str_size(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (2);
	if (n == -2147483648)
		return (12);
	if (n < 0)
	{
		size++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size + 1);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		limit;
	long	nn;

	nn = (long)n;
	i = calculate_str_size(n);
	limit = 0;
	str = malloc(sizeof(char) * calculate_str_size(n));
	if (str == NULL)
		return (NULL);
	if (nn < 0)
	{
		str[0] = '-';
		limit = 1;
		nn *= -1;
	}
	while (--i > limit)
	{
		str[i - 1] = nn % 10 + 48;
		nn /= 10;
	}
	str[calculate_str_size(n) - 1] = '\0';
	return (str);
}
