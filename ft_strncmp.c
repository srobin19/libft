/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 18:54:18 by srobin            #+#    #+#             */
/*   Updated: 2018/11/29 11:08:24 by srobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (*(s1 + i) && i < n && *(s1 + i) == *(s2 + i))
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)*(s1 + i) - (unsigned char)*(s2 + i));
}
