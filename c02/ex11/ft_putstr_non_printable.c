/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 02:39:44 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/01 10:01:35 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_char_to_hex(int src)
{
	char	*ref;

	ref = "0123456789abcdef";
	if (src > 16)
	{
		ft_char_to_hex((src / 16));
		ft_char_to_hex(src % 16);
	}
	else
		ft_putchar(ref[(src % 16)]);
}

void	ft_print_hexa(char c)
{
	int	dec;

	dec = c;
	if (dec < 0)
		dec = 256 + c;
	if ((dec > 0 && dec < 32) || dec > 126)
	{
		ft_putchar('\\');
		if (dec < 16)
			ft_putchar('0');
		ft_char_to_hex(dec);
	}
	else
		ft_putchar(dec);
}

void	ft_putstr_non_printable(char *str)
{
	char	*buff;

	buff = str;
	while (*buff)
	{
		ft_print_hexa(*buff);
		buff++;
	}
}
