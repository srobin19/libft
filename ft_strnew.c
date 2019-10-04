/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 19:48:15 by srobin            #+#    #+#             */
/*   Updated: 2018/11/28 21:21:04 by srobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*fresh;

	fresh = (char*)malloc(sizeof(char) * (size + 1));
	if (!fresh)
		return (NULL);
	ft_bzero(fresh, size + 1);
	return (fresh);
}
