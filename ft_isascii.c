/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <qutruche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:06:46 by qutruche          #+#    #+#             */
/*   Updated: 2024/11/06 18:38:03 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/* int	main(void)
{
	printf("%d\n", ft_isascii('A'));
	printf("%d\n", ft_isascii('Z'));
	printf("%d\n", ft_isascii(258));
} */