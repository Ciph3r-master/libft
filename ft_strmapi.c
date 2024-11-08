/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <qutruche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:49:06 by qutruche          #+#    #+#             */
/*   Updated: 2024/11/07 19:17:05 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char	test(unsigned int i, char c)
{
	(void) i;
	(void) c;
	return ('5');
} */

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	unsigned int	i;
	char			*res;

	i = 0;
	res = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (s[i])
	{
		res[i] = f((unsigned int)i, s[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}
/* int	main(void)
{
	printf("%s\n", ft_strmapi("abcd0", &test));
	printf("%s\n", ft_strmapi("", &test));
	printf("%s\n", ft_strmapi("abcd0", &test));
	printf("%s\n", ft_strmapi("abcdfsdfs", &test));
	printf("%s\n", ft_strmapi("abcd0", &test));
} */