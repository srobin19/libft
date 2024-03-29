/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 17:39:27 by srobin            #+#    #+#             */
/*   Updated: 2018/11/29 14:09:22 by srobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;

	i = 0;
	if (!ft_strlen(needle))
		return ((char*)haystack);
	while (*(haystack + i) != '\0')
	{
		j = 0;
		while (*(haystack + i + j) == *(needle + j))
		{
			j++;
			if (*(needle + j) == '\0')
				return ((char*)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
