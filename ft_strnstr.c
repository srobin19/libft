/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 18:04:31 by srobin            #+#    #+#             */
/*   Updated: 2018/11/29 14:09:31 by srobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!ft_strlen(needle))
		return ((char*)haystack);
	while (*(haystack + i) != '\0' && i < len)
	{
		j = 0;
		while (*(haystack + i + j) == *(needle + j) && i + j < len)
		{
			j++;
			if (!needle[j])
				return ((char*)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
