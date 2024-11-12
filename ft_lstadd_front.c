/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <qutruche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:45:18 by qutruche          #+#    #+#             */
/*   Updated: 2024/11/12 17:04:25 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst != NULL)
		new->next = *lst;
	*lst = new;
}
/* int	main(void)
{
	t_list	*list;
	t_list *current_list;

	list = NULL;
	ft_lstadd_front(&list, ft_lstnew("FIRST"));
  	current_list = list;
	while (current_list)
	{
		printf("%s\n", current_list->content);
		current_list = current_list->next;
	}
} */