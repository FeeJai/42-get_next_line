/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjankows <fjankows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 16:22:34 by fjankows          #+#    #+#             */
/*   Updated: 2020/02/22 17:59:36 by fjankows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		one;
	int		two;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	one = ft_strlen(s1);
	two = ft_strlen(s2);
	if (!(res = malloc(one + two + 1)))
		return (NULL);
	ft_memcpy(res, s1, one);
	ft_memcpy(res + one, s2, two);
	res[one + two] = '\0';
	return (res);
}
