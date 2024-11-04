/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <qutruche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:35:41 by qutruche          #+#    #+#             */
/*   Updated: 2024/11/04 17:40:39 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned int *)(dest + i)) = *((unsigned int *)(src + i));
		i++;
	}
	return (dest);
}

/* int	main(void)
{
	char	dest[10];
	char	src[20] = "TEst World !";
	printf("%s\n",ft_memcpy(dest, src, 17));
	printf("%s\n",memcpy(dest, src, 17));
	return (0);
} */