/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <qutruche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:31:13 by qutruche          #+#    #+#             */
/*   Updated: 2024/11/12 17:38:40 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	f(void *content)
{
	ft_putendl_fd((char *)content, 1);
} */

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

/* int		main(void)
{
	t_list	*list;

	list = ft_lstnew("Hello Word");
	ft_lstadd_back(&list, ft_lstnew("World"));
	ft_lstadd_back(&list, ft_lstnew("Comment ca va ?"));
	ft_lstadd_back(&list, ft_lstnew("Libft <>"));
	ft_lstadd_back(&list, ft_lstnew("Hey"));
	ft_lstiter(list, &f);

	return (0);
} */
