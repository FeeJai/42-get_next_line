/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjankows <fjankows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 16:32:40 by fjankows          #+#    #+#             */
/*   Updated: 2020/02/22 17:59:59 by fjankows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char	*res;
	int		len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	while ((*s == ' ' || *s == '\n' || *s == '\t') && len)
	{
		++s;
		--len;
	}
	while ((s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
			&& len)
	{
		--len;
	}
	if (!(res = malloc(len + 1)))
		return (NULL);
	ft_strncpy(res, s, len);
	res[len] = 0;
	return (res);
}
