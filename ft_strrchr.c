/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <qutruche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 19:34:57 by qutruche          #+#    #+#             */
/*   Updated: 2024/11/06 13:26:06 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if (!s)
		return (NULL);
	while (i >= 0)
	{
		if (s[i] == (unsigned char) c)
			return ((char *)(s + i));
		i--;
	}
	if (c == 0)
		return ((char *)(s + i));
	return (NULL);
}


/* int	main(void)
{
	printf("%s\n", ft_strrchr("HELLO HELLO", 'H' + 256));
	printf("%s\n", strrchr("HELLO HELLO", 'H' + 256));
} */