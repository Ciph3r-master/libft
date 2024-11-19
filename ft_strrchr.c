/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <qutruche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 19:34:57 by qutruche          #+#    #+#             */
/*   Updated: 2024/11/19 20:12:22 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if (!s)
		return (NULL);
	while (i >= 0)
	{
		if (s[i] == (unsigned char) c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
