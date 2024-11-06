/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <qutruche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:14:39 by qutruche          #+#    #+#             */
/*   Updated: 2024/11/05 20:40:31 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*pointer;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	pointer = malloc(size * nmemb);
	if (!pointer)
		return (NULL);
	ft_bzero(pointer, nmemb * size);
	return ((void *)pointer);
}