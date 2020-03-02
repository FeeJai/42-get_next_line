/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjankows <fjankows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 21:50:13 by fjankows          #+#    #+#             */
/*   Updated: 2020/02/22 10:42:21 by fjankows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < dstsize && dst[i])
	{
		++i;
	}
	while (((i + 1) < dstsize) && src[j])
	{
		dst[i] = src[j];
		++i;
		++j;
	}
	if (i < dstsize)
		dst[i] = '\0';
	return (i + ft_strlen(src) - j);
}
