/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 14:34:51 by srobin            #+#    #+#             */
/*   Updated: 2018/11/29 12:03:52 by srobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	long	div;
	int		zero;

	nb = n;
	div = 10000000000;
	zero = 0;
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	while (div /= 10)
		if (nb / div || zero)
		{
			ft_putchar_fd(nb / div + '0', fd);
			nb = nb % div;
			zero = 1;
		}
}
