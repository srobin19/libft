/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 20:26:49 by srobin            #+#    #+#             */
/*   Updated: 2018/11/29 12:01:07 by srobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long	nb;
	long	div;
	int		zero;

	nb = n;
	div = 10000000000;
	zero = 0;
	if (n == 0)
		return (ft_putchar('0'));
	if (n < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	while (div /= 10)
		if (nb / div || zero)
		{
			ft_putchar(nb / div + '0');
			nb %= div;
			zero = 1;
		}
}
