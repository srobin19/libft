/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 19:43:20 by srobin            #+#    #+#             */
/*   Updated: 2019/10/07 22:55:10 by srobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		s_cpy(char *dest, size_t *i, char const *s)
{
	int		j;

	j = 0;
	while (s[j])
	{
		dest[*i] = s[j];
		(*i)++;
		j++;
	}
}

char		*ft_strjoin3(char const *s1, char const *s2, char const *s3)
{
	char	*dest;
	size_t	i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (s3 == NULL)
	{
		dest = ft_strjoin(s1, s2);
		return (dest);
	}
	dest = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + ft_strlen(s3));
	if (dest == NULL)
		return (NULL);
	i = 0;
	s_cpy(dest, &i, s1);
	s_cpy(dest, &i, s2);
	s_cpy(dest, &i, s3);
	return (dest);
}
