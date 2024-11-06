/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <qutruche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:16:17 by qutruche          #+#    #+#             */
/*   Updated: 2024/11/05 19:14:34 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}
/* int	main(void)
{
	printf("%d\n", ft_isprint(31));
	printf("%d\n", ft_isprint(127));
	printf("%d\n", ft_isprint('d'));
	return (0);
} */