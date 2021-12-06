/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:26:53 by nnakarac          #+#    #+#             */
/*   Updated: 2021/11/30 19:18:44 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*buff;
	unsigned int	i;

	i = 0;
	buff = dest;
	while (i < n)
	{
		if (*src == '\0')
			*buff = '\0';
		else
		{
			*buff = *src;
			src++;
		}
		buff++;
		i++;
	}
	return (dest);
}
