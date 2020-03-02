/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjankows <fjankows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 10:54:55 by fjankows          #+#    #+#             */
/*   Updated: 2020/02/22 10:55:10 by fjankows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*match;

	match = NULL;
	while (*s)
	{
		if (*s == c)
		{
			match = (char *)s;
		}
		++s;
	}
	if (c == '\0')
	{
		match = (char *)s;
	}
	return (match);
}
