/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <qutruche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:57:29 by qutruche          #+#    #+#             */
/*   Updated: 2024/11/12 19:59:51 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	del(void *content)
{
	ft_putendl_fd((char *)content, 1);
	return ;
}
void	*test(void *content)
{
	return ("42");
} */

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
/* int	main(void)
{
	t_list	*list;
	t_list	*n_list;
	list = ft_lstnew("Hello world");
	ft_lstadd_back(&list, ft_lstnew("Hello"));
	ft_lstadd_back(&list, ft_lstnew("World"));

	n_list = ft_lstmap(list, &test, &del);
	ft_lstiter(n_list, &del);

} */