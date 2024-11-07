/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <qutruche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:54:45 by qutruche          #+#    #+#             */
/*   Updated: 2024/11/07 18:22:19 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb = (long int) n * -1;
	}
	else
		nb = (long int) n;
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd((nb % 10) + '0', fd);
}
/* #include "fcntl.h"
int	main(int ac, char **av)
{
	ft_putnbr_fd(ft_atoi(av[1]), open(av[2], O_WRONLY));
} */