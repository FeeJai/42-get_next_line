/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjankows <fjankows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 20:05:54 by fjankows          #+#    #+#             */
/*   Updated: 2020/02/28 20:11:49 by fjankows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h>
#include <unistd.h>

void	realloc_buffer(char **prev, char **inputbuf, char **writepos)
{
	ssize_t		bytes;

	bytes = ft_strlen(*prev);
	*inputbuf = ft_memalloc(bytes + BUFF_SIZE + 1);
	ft_memcpy(*inputbuf, *prev, ft_strlen(*prev));
	free(*prev);
	*prev = NULL;
	*writepos = *inputbuf + bytes;
}

int		process_input(char *inputbuf, char **prev, char **lineptr)
{
	char	*newline;

	if ((newline = ft_strchr(inputbuf, '\n')))
	{
		*lineptr = ft_strsub(inputbuf, 0, newline - inputbuf);
		*prev = ft_strdup(ft_strchr(inputbuf, '\n') + 1);
		free(inputbuf);
		return (1);
	}
	return (0);
}

int		handle_return(size_t bytes, char *inputbuf,
					char *writepos, char **lineptr)
{
	if (bytes == 0 && inputbuf != writepos)
	{
		*lineptr = inputbuf;
		return (1);
	}
	return (bytes);
}

int		get_next_line(const int fd, char **lineptr)
{
	static char	*prev;
	ssize_t		bytes;
	char		*inputbuf;
	char		*writepos;

	if (prev)
	{
		realloc_buffer(&prev, &inputbuf, &writepos);
		if (process_input(inputbuf, &prev, lineptr))
			return (1);
	}
	else
	{
		inputbuf = ft_memalloc(BUFF_SIZE + 1);
		writepos = inputbuf;
	}
	while ((bytes = read(fd, writepos, BUFF_SIZE)) > 0)
	{
		prev = inputbuf;
		realloc_buffer(&prev, &inputbuf, &writepos);
	}
	if (process_input(inputbuf, &prev, lineptr))
		return (1);
	return (handle_return(bytes, inputbuf, writepos, lineptr));
}
