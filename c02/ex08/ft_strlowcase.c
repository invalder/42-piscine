/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:50:31 by nnakarac          #+#    #+#             */
/*   Updated: 2021/11/30 19:55:06 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	char	*buff;

	buff = str;
	while (*buff)
	{
		if (*buff >= 'A' && *buff <= 'Z')
			*buff += 32;
		buff++;
	}
	return (str);
}
