/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjankows <fjankows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 19:27:17 by fjankows          #+#    #+#             */
/*   Updated: 2020/02/24 11:49:21 by fjankows         ###   ########.fr       */
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

static void	write_output_fd(int n, int len, int negative, int fd)
{
	if (negative)
		ft_putchar_fd('-', fd);
	while (len)
	{
		ft_putchar_fd(get_digit(n, --len, negative), fd);
	}
}

void		ft_putnbr_fd(int n, int fd)
{
	int		len;
	int		negative;

	if (n < 0)
		negative = 1;
	else
		negative = 0;
	len = get_len(n);
	write_output_fd(n, len, negative, fd);
}
