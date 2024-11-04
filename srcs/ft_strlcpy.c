/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <qutruche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:46:51 by qutruche          #+#    #+#             */
/*   Updated: 2024/11/04 18:24:09 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	i = 0;
	while (src && src[i] && size > 0 && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (src_len);
}
/* int	main(void)
{
	char	dest[10];
	char	src[10] = "Hello !";

	printf("Size :%d\nCpy :%s\n", ft_strlcpy(dest, src, 5), dest);
	printf("Size :%d\nCpy :%s\n", strlcpy(dest, src, 5), dest);
	return (0);
} */