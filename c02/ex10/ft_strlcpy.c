/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 21:14:25 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/01 02:32:15 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*buff;
	unsigned int	i;

	i = 0;
	buff = dest;
	while (*src)
	{
		if (size)
		{
			if (i < (size - 1))
				*buff = *src;
			else
				*buff = '\0';
		}
		buff++;
		src++;
		i++;
	}
	if (size)
		*buff = '\0';
	return (i);
}
