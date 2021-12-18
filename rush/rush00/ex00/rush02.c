/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmethira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 20:39:11 by pmethira          #+#    #+#             */
/*   Updated: 2021/11/27 20:39:15 by pmethira         ###   ########.fr       */
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
			if ((i == 1 || i == x) && j == 1)
				ft_putchar('A');
			else if ((i == 1 || i == x) && j == y)
				ft_putchar('C');
			else if ((j > 1 && j < y) && (i == x || i == 1))
				ft_putchar('B');
			else if ((i > 1 && i < x) && (j == y || j == 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
