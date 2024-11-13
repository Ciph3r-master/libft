/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <qutruche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:50:15 by qutruche          #+#    #+#             */
/*   Updated: 2024/11/13 14:13:50 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getsize(int nb)
{
	int			c;
	long int	n;

	c = 0;
	if (nb < 0)
	{
		n = (long int)nb * -1;
		++c;
	}
	else
		n = (long int)nb;
	while (n / 10)
	{
		c++;
		n /= 10;
	}
	c += 2;
	return (c);
}

static void	ft_fillstr(char *s, int nb, int size)
{
	long int	n;

	if (nb < 0)
	{
		n = (long int)nb * -1;
		s[0] = '-';
	}
	else
		n = (long int)nb;
	--size;
	s[size--] = 0;
	while (n / 10)
	{
		s[size] = n % 10 + '0';
		n /= 10;
		size--;
	}
	s[size] = n % 10 + '0';
}

char	*ft_itoa(int n)
{
	char	*s;
	int		size;

	size = ft_getsize(n);
	s = malloc(sizeof(char) * size);
	if (!s)
		return (NULL);
	ft_fillstr(s, n, size);
	return (s);
}
