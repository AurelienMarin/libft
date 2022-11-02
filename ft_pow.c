/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumarin <aumarin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 00:26:29 by aumarin           #+#    #+#             */
/*   Updated: 2022/11/03 00:26:35 by aumarin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_pow(int n, int pow)
{
	if (pow)
		return (n * ft_pow(n, pow - 1));
	else
		return (1);
}
