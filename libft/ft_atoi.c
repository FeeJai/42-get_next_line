/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjankows <fjankows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 11:02:26 by fjankows          #+#    #+#             */
/*   Updated: 2020/02/26 21:09:32 by fjankows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*skip_white_and_check_neg(const char *str, int *negative)
{
	while ((*str == '\t') || (*str == '\v') || (*str == '\f') ||
			(*str == '\r') || (*str == '\n') || (*str == ' ') || (*str == '\f'))
		str++;
	if (*str == '-')
	{
		*negative = 1;
		str++;
	}
	else if (*str == '+')
	{
		str++;
	}
	return (str);
}

int					ft_atoi(const char *str)
{
	long	res;
	int		negative;

	res = 0;
	negative = 0;
	str = skip_white_and_check_neg(str, &negative);
	while (*str >= '0' && *str <= '9')
	{
		res *= 10;
		res += *str - '0';
		str++;
		if ((res > (long)INT_MAX) && !negative)
			return (-1);
		if ((res > (long)INT_MAX + 1) && negative)
			return (0);
	}
	if (negative)
		res *= -1;
	return (res);
}
