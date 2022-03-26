/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumarin <aumarin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 03:47:03 by aumarin           #+#    #+#             */
/*   Updated: 2022/01/13 07:18:10 by aumarin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_display_fd(int nb, int fd)
{
	unsigned int	n;	

	n = nb;
	if (nb < 0)
	{
		n = n * -1;
		ft_putchar_fd('-', fd);
	}
	if (nb != 0)
	{
		ft_display_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}	
}

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == 0)
		ft_putchar_fd('0', fd);
	else
		ft_display_fd(nb, fd);
}
