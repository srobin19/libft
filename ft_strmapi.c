/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 20:14:38 by srobin            #+#    #+#             */
/*   Updated: 2018/12/04 17:40:27 by srobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	int					len;
	char				*fresh;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	if (!(fresh = ft_strnew(len)))
		return (NULL);
	while (*(s + i) != '\0')
	{
		*(fresh + i) = f(i, *(s + i));
		i++;
	}
	return (fresh);
}
