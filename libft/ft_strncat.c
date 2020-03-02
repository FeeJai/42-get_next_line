/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjankows <fjankows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 21:49:31 by fjankows          #+#    #+#             */
/*   Updated: 2020/02/22 10:51:57 by fjankows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*pos;
	size_t	i;

	pos = s1;
	i = 0;
	while (*pos)
	{
		pos++;
	}
	while (*s2 && i++ < n)
	{
		*(pos++) = *(s2++);
	}
	*pos = '\0';
	return (s1);
}
