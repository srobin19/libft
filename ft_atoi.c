/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 18:58:51 by srobin            #+#    #+#             */
/*   Updated: 2018/12/04 17:41:33 by srobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_space(const char c)
{
	if (c == ' ')
		return (1);
	else if (c == '\t' || c == '\n' || c == '\r' || c == '\v' || c == '\f')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int		i;
	int		n;
	int		nb;

	i = 0;
	n = 0;
	nb = 0;
	while (ft_is_space(str[i]))
		i++;
	if (str[i] == '-')
	{
		n = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	if (n == 1)
		nb = -nb;
	return (nb);
}
