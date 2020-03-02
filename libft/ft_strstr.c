/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjankows <fjankows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 18:43:35 by fjankows          #+#    #+#             */
/*   Updated: 2020/02/22 10:55:50 by fjankows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	while (1)
	{
		j = 0;
		while (1)
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
