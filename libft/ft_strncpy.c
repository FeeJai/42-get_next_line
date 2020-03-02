/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjankows <fjankows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 21:49:04 by fjankows          #+#    #+#             */
/*   Updated: 2020/02/21 21:51:20 by fjankows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	strlen;

	strlen = ft_strlen(src) + 1;
	if (strlen < len)
	{
		ft_memcpy(dst, src, strlen);
		ft_memset(dst + strlen, '\0', len - strlen);
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
