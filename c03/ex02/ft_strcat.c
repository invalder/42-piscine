/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 08:57:52 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/06 22:09:00 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*buff;
	int		src_len;

	buff = dest;
	src_len = ft_strlen(src);
	while (*buff)
		buff++;
	while (src_len && *src)
	{
		*buff = *src;
		buff++;
		src++;
	}
	*buff = '\0';
	return (dest);
}
