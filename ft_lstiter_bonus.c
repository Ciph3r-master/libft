/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <qutruche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:31:13 by qutruche          #+#    #+#             */
/*   Updated: 2024/11/13 14:14:15 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f) (void *))
{
	t_list	*list;

	if (!lst)
		return ;
	list = lst;
	while (list)
	{
		f(list->content);
		list = list->next;
	}
}
