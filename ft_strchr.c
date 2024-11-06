/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <qutruche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:28:52 by qutruche          #+#    #+#             */
/*   Updated: 2024/11/06 16:41:17 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(s + i));
		i++;
	}
	if ((unsigned char)c == 0)
		return ((char *)(s + i));
	return (NULL);
}

/* int	main(void)
{
	printf("%s\n", ft_strchr("Hello World", 'H' + 256));
	printf("%s\n", strchr("Hello World", 'H' + 256));
} */
