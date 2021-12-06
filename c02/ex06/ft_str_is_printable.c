/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:41:37 by nnakarac          #+#    #+#             */
/*   Updated: 2021/11/30 19:43:17 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	char	*buff;

	buff = str;
	while (*buff)
	{
		if (*buff < 32 || *buff > 126)
			return (0);
		buff++;
	}
	return (1);
}
