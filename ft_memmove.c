/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 18:36:20 by srobin            #+#    #+#             */
/*   Updated: 2018/11/29 14:18:44 by srobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dstcopy;
	char	*srccopy;
	size_t	i;

	i = 0;
	dstcopy = (char*)dst;
	srccopy = (char*)src;
	if (srccopy < dstcopy)
	{
		while ((int)(--len) >= 0)
			*(dstcopy + len) = *(srccopy + len);
	}
	else
		while (i < len)
		{
			*(dstcopy + i) = *(srccopy + i);
			i++;
		}
	return (dst);
}
