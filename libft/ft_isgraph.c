/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjankows <fjankows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 21:25:54 by fjankows          #+#    #+#             */
/*   Updated: 2020/02/26 21:27:27 by fjankows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_isgraph(int c)
{
	if ((c >= 041 && c <= 077) || (c >= 0100 && c <= 0176))
		return (1);
	return (0);
}
