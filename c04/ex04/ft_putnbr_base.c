/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 21:41:02 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/07 23:21:35 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 > *s2)
			return (1);
		else if (*s2 > *s1)
			return (-1);
		if (*s1)
			s1++;
		if (*s2)
			s2++;
	}
	return (0);
}

void	ft_putnbr_b_sub(long num, char *base, long b)
{
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (b && num < b)
	{
		ft_putchar(base[num]);
	}
	else if (b && num >= b)
	{
		ft_putnbr_b_sub((num / b), base, b);
		ft_putnbr_b_sub((num % b), base, b);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	b;

	b = 0;
	if (ft_strcmp(base, "0123456789") == 0)
		b = 10;
	else if (ft_strcmp(base, "01") == 0)
		b = 2;
	else if (ft_strcmp(base, "0123456789ABCDEF") == 0)
		b = 16;
	else if (ft_strcmp(base, "poneyvif") == 0)
		b = 8;
	if (b)
		ft_putnbr_b_sub(nbr, base, b);
}
