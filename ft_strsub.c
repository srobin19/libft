/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 15:37:17 by srobin            #+#    #+#             */
/*   Updated: 2018/11/23 16:02:59 by srobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fresh;
	size_t	i;

	if (!s)
		return (NULL);
	fresh = ft_strnew(len);
	if (!fresh)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(fresh + i) = *(s + start);
		i++;
		start++;
	}
	return (fresh);
}
