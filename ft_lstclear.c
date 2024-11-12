/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <qutruche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:26:16 by qutruche          #+#    #+#             */
/*   Updated: 2024/11/12 18:54:59 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	f(void *content)
{
	ft_putendl_fd((char *)content, 1);
}

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list	*temp;

	temp = *lst;
	while (temp)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

/* int	main(void)
{
	t_list	*list;
	t_list	*last;

	list = ft_lstnew("Hello world");
	ft_lstadd_back(&list, ft_lstnew("Hello"));
	ft_lstadd_back(&list, ft_lstnew("World"));
	last = ft_lstlast(list);

	ft_lstclear(&list, &f);
} */
