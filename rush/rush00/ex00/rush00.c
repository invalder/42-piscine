/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:46:58 by pnopjira          #+#    #+#             */
/*   Updated: 2021/11/27 21:59:19 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

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
				ft_putchar('o');
			else if ((i == x && j == 1) || (i == x && j == y))
				ft_putchar('o');
			else if ((j == 1 || j == y) && (i > 1 && i < x))
				ft_putchar('-');
			else if ((i == 1 || i == x) && (j > 1 && j < y))
				ft_putchar('|');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}	
