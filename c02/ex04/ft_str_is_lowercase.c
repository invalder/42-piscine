/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:28:59 by nnakarac          #+#    #+#             */
/*   Updated: 2021/11/30 19:34:19 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	char	*buff;

	buff = str;
	while (*buff)
	{
		if (*buff < 97 || *buff > 122)
			return (0);
		buff++;
	}
	return (1);
}
