/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 13:16:22 by srobin            #+#    #+#             */
/*   Updated: 2018/12/06 13:41:27 by srobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*tmp;

	if (!lst || !f)
		return ;
	tmp = lst;
	while (lst->next)
	{
		f(lst->next);
		lst = lst->next;
	}
	lst = tmp;
	f(lst);
}
