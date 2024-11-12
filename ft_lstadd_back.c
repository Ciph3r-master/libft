/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <qutruche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:13:12 by qutruche          #+#    #+#             */
/*   Updated: 2024/11/12 16:29:24 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	if (!last)
	{
		*lst = new;
		return ;
	}
	last->next = new;
}

/* int	main(void)
{
	t_list	*list;
	t_list *current_list;

	list = NULL;
	ft_lstadd_back(&list, ft_lstnew("BACK"));
  	current_list = list;
	while (current_list)
	{
		printf("%s\n", current_list->content);
		current_list = current_list->next;
	}
} */
