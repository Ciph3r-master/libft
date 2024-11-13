/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <qutruche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:52:24 by qutruche          #+#    #+#             */
/*   Updated: 2024/11/13 14:15:53 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	size;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	join = malloc(sizeof(char) * size);
	if (!s1 && !s2)
		return (NULL);
	if (!join)
		return (NULL);
	ft_memcpy(join, s1, ft_strlen(s1));
	ft_memcpy(join + ft_strlen(s1), s2, ft_strlen(s2));
	join[size - 1] = 0;
	return (join);
}
