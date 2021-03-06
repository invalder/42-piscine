/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 23:57:10 by pnopjira          #+#    #+#             */
/*   Updated: 2021/11/27 17:16:07 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((i == 1 && j == 1) || (i == 1 && j == y))
				ft_putchar('A');
			else if ((i == x && j == 1) || (i == x && j == y))
				ft_putchar('C');
			else if ((i == 1 || i == x) && (j > 1 && j < y))
				ft_putchar('B');
			else if ((j == 1 || j == y) && (i > 1 && i < x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			i = i + 1;
		}
		ft_putchar('\n');
		j = j + 1;
	}
}
