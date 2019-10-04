/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 15:50:51 by srobin            #+#    #+#             */
/*   Updated: 2018/11/29 10:30:07 by srobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	size_t	i;
	size_t	j;
	size_t	s1len;
	size_t	s2len;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	if (!(fresh = ft_strnew(s1len + s2len)))
		return (NULL);
	i = -1;
	while (++i < s1len)
		*(fresh + i) = *(s1 + i);
	j = -1;
	while (++j < s2len)
	{
		*(fresh + i) = *(s2 + j);
		i++;
	}
	return (fresh);
}
