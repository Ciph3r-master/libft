/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <qutruche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:22:00 by qutruche          #+#    #+#             */
/*   Updated: 2024/11/13 13:42:21 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int					i;
	int					sign;
	unsigned long long	res;

	i = 0;
	res = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
		sign = 1 - 2 * (nptr[i++] == '-');
	while (ft_isdigit(nptr[i]))
	{
		res *= 10;
		res += nptr[i++] - '0';
		if (res > 9223372036854775807)
		{
			if (sign == 1)
				return (-1);
			else
				return (0);
		}
	}
	return ((int)(res * sign));
}

/* int	main(int ac, char **av)
{
	printf("%d\n", ft_atoi(av[1]));
	printf("%d\n", atoi(av[1]));
	return (0);
} */