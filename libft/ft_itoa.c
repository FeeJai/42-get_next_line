/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjankows <fjankows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 18:41:28 by fjankows          #+#    #+#             */
/*   Updated: 2020/02/22 19:32:32 by fjankows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	get_digit(int n, int pos, int negative)
{
	int i;

	i = 0;
	while (i++ < pos)
		n /= 10;
	n %= 10;
	if (negative)
		n *= -1;
	return (n + '0');
}

static int	get_len(int n)
{
	int len;

	len = 1;
	while ((n /= 10) != 0)
		len++;
	return (len);
}

static void	write_outb(char *outb, int n, int len, int negative)
{
	if (negative)
		*(outb++) = '-';
	while (len)
	{
		*(outb++) = get_digit(n, --len, negative);
	}
	*outb = '\0';
}

char		*ft_itoa(int n)
{
	int		len;
	int		negative;
	char	*outb;

	if (n < 0)
		negative = 1;
	else
		negative = 0;
	len = get_len(n);
	if (!(outb = malloc(len + negative + 1)))
		return (NULL);
	write_outb(outb, n, len, negative);
	return (outb);
}
