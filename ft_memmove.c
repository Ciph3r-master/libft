/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <qutruche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:30:49 by qutruche          #+#    #+#             */
/*   Updated: 2024/11/13 14:15:00 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (!dest && !src)
		return (NULL);
	if (dest >= src)
		while (n-- > 0)
			((char *)(dest))[n] = ((char *)(src))[n];
	else
		while (++i < n)
			((char *)(dest))[i] = ((char *)(src))[i];
	return (dest);
}
