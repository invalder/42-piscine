/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 21:09:00 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/09 11:35:34 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	if_prime(int nb, int div)
{
	if (nb < 2 || (nb % div == 0 && nb != div))
		return (0);
	else if (nb == div || nb == 2147483647)
		return (1);
	else
		return (if_prime(nb, div + 1));
}

int	ft_is_prime(int nb)
{
	return (if_prime(nb, 2));
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
	printf("isprime of %d = %d", num, ft_is_prime(num));
}
*/
