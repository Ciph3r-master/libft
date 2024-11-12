/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <qutruche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:21:01 by qutruche          #+#    #+#             */
/*   Updated: 2024/11/12 16:27:11 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	if (lst == NULL)
		return (NULL);
	current = lst;
	while (current->next)
		current = current->next;
	return (current);
}
/* int	main(void)
{
	t_list	*list;
	t_list	*last;

	list = ft_lstnew("Hello world");
	ft_lstadd_back(&list, ft_lstnew("Hello"));
	ft_lstadd_back(&list, ft_lstnew("World"));
	last = ft_lstlast(list);
	printf("%s\n", (char *)last->content);
} */