/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 20:05:28 by srobin            #+#    #+#             */
/*   Updated: 2018/11/29 14:37:16 by srobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_intlength(int n)
{
	int		i;

	i = 0;
	while (n / 10)
	{
		i++;
		n = n / 10;
	}
	return (i + 1);
}

char		*ft_itoa(int n)
{
	char			*ascii;
	int				length;
	unsigned int	n2;

	length = ft_intlength(n);
	n2 = n;
	if (n < 0)
	{
		n2 = -n;
		length++;
	}
	if (!(ascii = ft_strnew(length)))
		return (NULL);
	if (n == 0)
		ascii[--length] = 48;
	while (n2 / 10)
	{
		length--;
		ascii[length] = n2 % 10 + 48;
		n2 = n2 / 10;
	}
	ascii[--length] = n2 + 48;
	if (n < 0)
		ascii[--length] = 45;
	return (ascii);
}
