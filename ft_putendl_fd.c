/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 14:29:09 by srobin            #+#    #+#             */
/*   Updated: 2018/11/23 14:32:20 by srobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int		i;

	i = 0;
	while (*(s + i) != '\0')
	{
		ft_putchar_fd(*(s + i), fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}