/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 08:57:52 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/06 22:09:26 by nnakarac         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				src_len;
	char			*buff;

	i = 0;
	buff = dest;
	src_len = ft_strlen(src);
	while (*buff)
		buff++;
	while (src_len && *src && i < nb)
	{
		*buff = *src;
		buff++;
		src++;
		i++;
	}
	*buff = '\0';
	return (dest);
}
