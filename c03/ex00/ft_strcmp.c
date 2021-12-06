/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:30:56 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/06 21:58:32 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

int	ft_compare(char *s1, char *s2, int first)
{
	char	*buff;

	if (first)
		buff = s1;
	else
		buff = s2;
	while (*buff)
	{
		if (*s1 > *s2)
			return (1);
		else if (*s1 < *s2)
			return (-1);
		if (*s1)
			s1++;
		if (*s2)
			s2++;
		buff++;
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	s1_len;
	int	s2_len;
	int	result;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (s1_len > s2_len)
		result = ft_compare(s1, s2, 1);
	else
		result = ft_compare(s1, s2, 0);
	return (result);
}
