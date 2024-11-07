/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <qutruche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:27:48 by qutruche          #+#    #+#             */
/*   Updated: 2024/11/07 13:09:53 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			end;
	unsigned int	start;

	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[start]))
		start++;
	while (end > 0 && ft_strchr(set, s1[end]))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}

/* int	main(void)
{
	char	*s = ft_strtrim("55555test55555555555", "5");
	printf("%s\n", s);
	free(s);
} */
