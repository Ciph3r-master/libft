/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <qutruche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:18:16 by qutruche          #+#    #+#             */
/*   Updated: 2024/11/06 13:21:45 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)(s + i)) == (unsigned char) c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	printf("%s\n", ft_memchr("Hello world", 'w', 8));
	printf("%s\n", memchr("Hello world", 'w', 8));
} */