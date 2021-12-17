/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:16:27 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/15 23:40:35 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"
#include "bsq.h"

#define BUFF_SIZE 4096

int	ft_file_size(char *file)
{
	int		fd;
	int		size;
	int		b_size;
	char	buff[BUFF_SIZE + 1];

	b_size = 1;
	size = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (-1);
	while (b_size)
	{
		b_size = read(fd, buff, BUFF_SIZE);
		size += b_size;
	}
	if (close(fd) == -1)
		return (-1);
	return (size);
}

int	ft_file_read(char *file, char *map)
{
	int	fd;
	int	size;

	size = ft_file_size(file);
	if (size > 0)
	{
		fd = open(file, O_RDONLY);
		if (fd < 0)
			return (-1);
		read(fd, map, size);
		if (close(fd) < 0)
			return (-1);
		return (1);
	}
	return (0);
}
