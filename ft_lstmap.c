/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <qutruche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:57:29 by qutruche          #+#    #+#             */
/*   Updated: 2024/11/13 14:14:25 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_new(void *content, void *(*f) (void *))
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->next = NULL;
	list->content = f(content);
	return (list);
}

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void *))
{
	t_list	*nlist;
	t_list	*temp;

	if (!lst)
		return (NULL);
	nlist = ft_new(lst->content, f);
	if (!nlist)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		temp = ft_new(lst->content, f);
		if (!temp)
		{
			ft_lstclear(&nlist, del);
			return (NULL);
		}
		ft_lstadd_back(&nlist, temp);
		lst = lst->next;
	}
	return (nlist);
}
