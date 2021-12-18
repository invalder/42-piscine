/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utility.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 09:14:49 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/04 18:06:11 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
void	ft_putconv(int nbr);
void	ft_error(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr(int nbr)
{
	if (nbr < 10)
		ft_putchar('0' + nbr);
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

void	ft_putconv(int nbr)
{
	if (nbr == 8)
		ft_putchar('4');
	else if (nbr == 4)
		ft_putchar('3');
	else if (nbr == 2)
		ft_putchar('2');
	else if (nbr == 1)
		ft_putchar('1');
	else
		ft_putchar('x');
}

void	ft_error(void)
{
	ft_putstr("Error\n");
}
