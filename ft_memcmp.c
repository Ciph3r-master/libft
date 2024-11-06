/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <qutruche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:38:34 by qutruche          #+#    #+#             */
/*   Updated: 2024/11/05 19:14:34 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char c1;
	unsigned char c2;

	i = 0;
	c1 = *((unsigned char *)(s1));
	c2 = *((unsigned char *)(s2));
	while (i < n && (c1 == c2))
	{
		c1 = *((unsigned char *)(s1 + i));
		c2 = *((unsigned char *)(s2 + i));
		i++;
	}
	return (c1 - c2);
} */

/* int	main(int ac, char **av)
{
	printf("%d\n", ft_memcmp(av[1], av[2], atoi(av[3])));
	printf("%d\n", memcmp(av[1], av[2], atoi(av[3])));
} */