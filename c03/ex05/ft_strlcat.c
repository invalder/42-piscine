/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:06:03 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/06 21:30:18 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen_uint(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	char			*p_src;
	char			*p_dest;

	p_src = src;
	p_dest = dest;
	src_len = ft_strlen_uint(src);
	dest_len = ft_strlen_uint(dest);
	if (size <= dest_len)
	{
		return (size + src_len);
	}
	while ((*p_src) && ((dest_len + 1) < size))
	{
		*(p_dest + dest_len) = *p_src;
		p_src++;
		dest_len++;
	}
	*(p_dest + dest_len) = '\0';
	return (ft_strlen_uint(dest) + ft_strlen_uint(p_src));
}
