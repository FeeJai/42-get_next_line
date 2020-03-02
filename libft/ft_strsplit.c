/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjankows <fjankows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 16:46:56 by fjankows          #+#    #+#             */
/*   Updated: 2020/02/24 12:11:32 by fjankows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*search_for_substr_end(char *s, char c, char *res[], int *elements)
{
	int		i;

	if (!s || !*s)
	{
		return (NULL);
	}
	i = 1;
	while (s[i] != c && s[i] != '\0')
	{
		++i;
	}
	if (!(res[*elements] = malloc(i + 1)))
		return (NULL);
	ft_memcpy(res[*elements], s, i);
	res[*elements][i] = '\0';
	if (++(*elements) == 255)
		return (NULL);
	s += i;
	return (s);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	char	*res[255];
	char	**ret;

	i = 0;
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == c)
		{
			++s;
		}
		else if (*s != '\0')
		{
			if (!(s = search_for_substr_end((char *)s, c, res, &i)))
				return (NULL);
		}
	}
	ret = (char**)ft_memalloc(sizeof(char*) * (i + 1));
	ft_memcpy(ret, res, sizeof(char*) * i);
	return (ret);
}
