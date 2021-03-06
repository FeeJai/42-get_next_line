/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjankows <fjankows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:30:58 by fjankows          #+#    #+#             */
/*   Updated: 2020/02/22 10:52:05 by fjankows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*pos;

	pos = s1;
	while (*pos)
	{
		pos++;
	}
	while (*s2)
	{
		*(pos++) = *(s2++);
	}
	*pos = '\0';
	return (s1);
}
