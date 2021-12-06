/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:34:44 by nnakarac          #+#    #+#             */
/*   Updated: 2021/11/30 19:39:39 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	char	*buff;

	buff = str;
	while (*buff)
	{
		if (*buff < 65 || *buff > 90)
			return (0);
		buff++;
	}
	return (1);
}
