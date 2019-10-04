/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 17:10:22 by srobin            #+#    #+#             */
/*   Updated: 2018/11/29 14:13:58 by srobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s1;
	int		len;

	i = 0;
	s1 = (char*)s;
	len = (int)ft_strlen(s) + 1;
	while (i < len)
	{
		if (*(s1 + i) == (char)c)
			return ((s1 + i));
		i++;
	}
	return (NULL);
}
