/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 00:01:46 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/07 21:27:31 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	char	*str_ptr;
	int		neg;
	long	num;

	neg = 1;
	num = 0;
	str_ptr = str;
	while (*str_ptr <= 32)
		str_ptr++;
	while (*str_ptr == '-' || *str_ptr == '+')
	{
		if (*str_ptr == '-')
			neg *= -1;
		str_ptr++;
	}
	while (*str_ptr >= '0' && *str_ptr <= '9')
	{
		num = (num * 10) + (*str_ptr - '0');
		str_ptr++;
	}
	return (num * neg);
}
