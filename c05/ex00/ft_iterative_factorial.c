/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:12:11 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/09 09:03:46 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 2)
	{
		res = res * (nb - 1);
		nb--;
	}
	return (res);
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

	if (argc != 2)
		return (-1);
	num = ft_atoi(argv[1]);
	printf("%s", argv[1]);
	printf("factorial of %d = %d", num, ft_iterative_factorial(num));
}
*/
