/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspacer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 23:29:17 by srobin            #+#    #+#             */
/*   Updated: 2019/10/07 23:29:49 by srobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_isspacer(int c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}
