/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <qutruche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:15:54 by qutruche          #+#    #+#             */
/*   Updated: 2024/11/15 14:46:41 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_freeerr(char **s, size_t size)
{
	while (size-- > 0)
	{
		free(s[size]);
	}
	free(s);
}

static char	*ft_strndup(const char *src, int size)
{
	char	*dup;
	int		i;

	if (size == 0)
		return (NULL);
	i = 0;
	dup = (char *) malloc(sizeof(char) * size + 1);
	if (!dup)
		return (NULL);
	while (src[i] && i < size)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

static	int	ft_countword(const char *s, char c)
{
	int		i;
	int		count;
	char	check;

	count = 0;
	check = 1;
	i = 0;
	while (s[i])
	{
		if (check && s[i] != c)
		{
			check = 0;
			count++;
		}
		if (s[i] == c)
			check = 1;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		start;
	int		end;
	int		i;

	start = 0;
	i = -1;
	end = 0;
	split = malloc(sizeof(char *) * (ft_countword(s, c) + 1));
	if (!split)
		return (NULL);
	while (++i < (ft_countword(s, c)))
	{
		start = end;
		while (s[start] && s[start] == c)
			start++;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		split[i] = ft_strndup(&s[start], (end - start));
		if (!split[i])
			return (ft_freeerr(split, i), NULL);
	}
	split[i] = NULL;
	return (split);
}
