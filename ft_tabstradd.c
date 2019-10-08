/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabstradd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 21:40:19 by srobin            #+#    #+#             */
/*   Updated: 2019/10/07 17:15:16 by srobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_tabstradd(char **tab, char *str)
{
	char		**result;
	char		**result_ptr;
	char		**roam;
	size_t		i;

	if (!tab || !str)
		return (NULL);
	if (!(result = (char**)malloc(sizeof(char *) * (ft_tablen(tab) + 2))))
		return (NULL);
	roam = tab;
	result_ptr = result;
	i = 0;
	while (i < ft_tablen(tab))
	{
		if (!(*result_ptr = ft_strdup(*roam)))
			return (NULL);
		result_ptr++;
		roam++;
		i++;
	}
	if (!(*result_ptr = ft_strdup(str)))
		return (NULL);
	result_ptr++;
	*result_ptr = NULL;
	return (result);
}
