/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:08:12 by srobin            #+#    #+#             */
/*   Updated: 2018/11/29 13:38:07 by srobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *(const char*)(s1 + i) == *(const char*)(s2 + i))
		i++;
	if (i == n)
		return (0);
	return (*(unsigned char*)(s1 + i) - *(unsigned char*)(s2 + i));
}
