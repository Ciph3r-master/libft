/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <qutruche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:43:22 by qutruche          #+#    #+#             */
/*   Updated: 2024/11/13 14:17:13 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!little[0])
		return ((char *)big);
	while ((i + j) < len && big[i])
	{
		if (big[i + j] == little[j])
		{
			j++;
			if (!little[j])
				return ((char *)(big + i));
		}
		else
		{
			j = 0;
			i++;
		}
	}
	return (NULL);
}
