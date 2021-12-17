/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:19:30 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/09 09:05:48 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	num;

	num = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power)
	{
		num *= nb;
		power--;
	}
	return (num);
}

/*
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

int	main(int argc, char **argv)
{
	int	num;
	int	pow;

	if (argc != 3)
		return (-1);
	num = ft_atoi(argv[1]);
	pow = ft_atoi(argv[2]);
	printf("nb: %s, pow: %s\n", argv[1], argv[2]);
	printf("power of %d ^ %d = %d", num, pow, ft_iterative_power(num, pow));
}
*/
