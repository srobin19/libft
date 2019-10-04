/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 20:48:50 by srobin            #+#    #+#             */
/*   Updated: 2018/11/29 14:36:42 by srobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int		i;
	int		words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			words++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (words);
}

static int	ft_wordlength(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	if (!s || !(tab = (char**)malloc(sizeof(tab) * ft_countwords(s, c) + 1)))
		return (NULL);
	i = 0;
	j = -1;
	k = 0;
	while (++j < ft_countwords(s, c))
	{
		k = 0;
		while (s[i] == c)
			i++;
		if (!(tab[j] = (char*)malloc(sizeof(tab[j])
						* (ft_wordlength(&s[i], c) + 1))))
			return (NULL);
		while (s[i] != c && s[i])
			tab[j][k++] = s[i++];
		tab[j][k] = '\0';
	}
	tab[j] = 0;
	return (tab);
}
