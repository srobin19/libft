/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 20:06:53 by srobin            #+#    #+#             */
/*   Updated: 2018/12/04 17:40:15 by srobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		len;
	char	*fresh;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	if (!(fresh = ft_strnew(len)))
		return (NULL);
	while (*(s + i) != '\0')
	{
		*(fresh + i) = f(*(s + i));
		i++;
	}
	return (fresh);
}
