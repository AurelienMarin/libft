/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_atoi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumarin <aumarin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 03:18:30 by aumarin           #+#    #+#             */
/*   Updated: 2022/12/12 03:24:07 by aumarin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_big_atoi(const char *str)
{
	long	i;
	long	value;
	long	isneg;

	value = 0;
	i = 0;
	isneg = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		isneg = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (isneg == 1)
			value = (value * 10) - (str[i] - 48);
		else
			value = (value * 10) + (str[i] - 48);
		i++;
	}
	return (value);
}
