/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjankows <fjankows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 10:55:38 by fjankows          #+#    #+#             */
/*   Updated: 2020/02/22 10:55:52 by fjankows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (1)
	{
		j = 0;
		while (i + j <= len)
		{
			if (to_find[j] == '\0')
				return (&str[i]);
			if (str[i + j] != to_find[j])
				break ;
			++j;
		}
		if (str[i] == 0)
			break ;
		++i;
	}
	return (0);
}
