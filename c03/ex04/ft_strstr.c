/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:26:57 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/06 22:21:29 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strmatch(char *str, char *keyword)
{
	int	found;

	found = 0;
	while (*keyword)
	{
		if (*str == *keyword)
			found = 1;
		else
			return (0);
		keyword++;
		str++;
	}
	return (found);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*buff_str;
	char	*buff_ref;
	char	*buff_find_search;

	buff_str = str;
	buff_ref = str;
	while (*buff_str)
	{
		buff_ref = buff_str;
		buff_find_search = to_find;
		if (*buff_str == *to_find)
		{
			if (ft_strmatch(buff_str, buff_find_search))
				return (buff_ref);
		}
		buff_str++;
	}
	if (*str)
		return (NULL);
	return (str);
}
