/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 22:16:10 by srobin            #+#    #+#             */
/*   Updated: 2018/11/27 22:59:47 by srobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_space(char const s)
{
	if (s == ' ' || s == '\n' || s == '\t')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	int		length;
	int		i;
	int		j;
	int		k;
	char	*result;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	i = 0;
	j = length - 1;
	while (ft_space(s[i]))
		i++;
	if (i == length)
		return (ft_strnew(0));
	while (ft_space(s[j]))
		j--;
	if (!(result = ft_strnew(j - i + 1)))
		return (NULL);
	k = 0;
	while (i <= j)
		result[k++] = s[i++];
	result[k] = '\0';
	return (result);
}
