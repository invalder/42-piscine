/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 19:29:46 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/09 09:36:16 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_power(int base, int pow)
{
	if (pow == 0)
		return (1);
	while (pow > 1)
	{
		base *= base;
		pow--;
	}
	return (base);
}

int	ft_sqrt_sub(int n, int base, int cnt)
{
	int	chk;

	chk = cnt;
	if (n / base == 1)
		chk++;
	else
	{
		chk = ft_sqrt_sub((n / base), base, (cnt + 1));
	}
	return (chk);
}

int	ft_sqrt(int n)
{
	int	base;

	base = 2;
	if (n <= 0)
		return (0);
	if (n == 1)
		return (1);
	while (!(n % base == 0 && (n / base) <= base))
		base++;
	if ((base * base) == n)
		return (base);
	else
		return (0);
}

/*
int	ft_atoi(char *str)
{
	char*str_ptr;
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

	if (argc != 2)
		return (-1);
	num = ft_atoi(argv[1]);
	printf("debug cnt: %d", ft_sqrt(num));
	return(0);
}
*/
