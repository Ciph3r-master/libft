/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: billcipher <billcipher@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:30:49 by qutruche          #+#    #+#             */
/*   Updated: 2024/11/10 14:11:09 by billcipher       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (!dest && !src)
		return (NULL);
	if (dest >= src)
		while (n-- > 0)
			((char *)(dest))[n] = ((char *)(src))[n];
	else
		while (++i < n)
			((char *)(dest))[i] = ((char *)(src))[i];
	return (dest);
}
/* int	main(void)
{
	char	str[] = "Bonjour";
	char	dest[] = "Coucou";

	size_t size = 5;
	ft_memmove(dest + 5, str, size);
	printf("%s\n", dest);
} */