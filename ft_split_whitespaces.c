/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 00:42:53 by srobin            #+#    #+#             */
/*   Updated: 2019/10/04 18:40:56 by srobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

# define I var[0]
# define J var[1]
# define S var[2]

static int		ft_nb_words(char *str)
{
	int 		i;
	int 		words;

	i = 1;
	words = 0;
	if ((str[0] != ' ' && str[i] != '\t' && str[i] != '\n'))
		words = 1;
	while (str[i] != '\0')
	{
		if ((str[i] != ' ' && str[i] != '\t' && str[i] != '\n') &&
		(str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n'))
			words++;
		i++;
	}
	return (words);
}

static int		ft_length(char *str, int i)
{
	int			 k;

	k = 0;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
	{
		k++;
		i++;
	}
	return (k);
}

static int		ft_alphanumeric(char *str, int i)
{
	if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
		return (1);
	else
		return (0);
}

char			**ft_split_whitespaces(char *str)
{
	char		**tab;
	int			var[3];

	tab = (char**)malloc(sizeof(tab) * (ft_nb_words(str) + 1));
	I = 0;
	J = 0;
	while (J < ft_nb_words(str))
	{
		while (!ft_alphanumeric(str, I))
			I++;
		if (ft_alphanumeric(str, I))
			tab[J] = (char*)malloc(sizeof(tab[J]) * (ft_length(str, I) + 1));
		S = 0;
		while (ft_alphanumeric(str, I))
		{
			tab[J][S] = str[I];
			I++;
			S++;
		}
		tab[J][S] = '\0';
		J++;
	}
	tab[J] = NULL;
	return (tab);
}
