/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_block_prop.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 18:27:00 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/05 13:39:12 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
void	ft_putconv(int nbr);
void	ft_print_edge_top(int *edge, int size);
void	ft_print_edge_bottom(int *edge, int size);
void	ft_print_edge_left(int *edge, int size, int row);
void	ft_print_edge_right(int *edge, int size, int row);
void	ft_print_block_prop(int *edge, int *block, int size, int is_prop);

void	ft_print_block_prop(int *edge, int *block, int size, int is_prop)
{
	int	*ptr;
	int	r;
	int	c;

	r = 0;
	ptr = block;
	ft_print_edge_top(edge, size);
	while (r < size)
	{
		c = 0;
		ft_print_edge_left(edge, size, r);
		while (c < size)
		{
			if (is_prop)
				ft_putnbr(*(ptr + (size * r) + c));
			else
				ft_putconv(*(ptr + (size * r) + c));
			ft_putstr(" ");
			c++;
		}
		ft_print_edge_right(edge, size, r);
		ft_putstr("\n");
		r++;
	}
	ft_print_edge_bottom(edge, size);
}

void	ft_print_edge_top(int *edge, int size)
{
	int	*ptr;
	int	i;

	i = 0;
	ptr = edge;
	ft_putstr("  | ");
	while (i < size)
	{
		ft_putnbr(edge[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putstr("|   \n");
	ft_putstr("===============\n");
}

void	ft_print_edge_bottom(int *edge, int size)
{
	int	*ptr;
	int	i;

	i = 0;
	ptr = edge;
	ft_putstr("===============\n");
	ft_putstr("  | ");
	while (i < size)
	{
		ft_putnbr(edge[(size) + i]);
		ft_putchar(' ');
		i++;
	}
	ft_putstr("|   \n");
}

void	ft_print_edge_left(int *edge, int size, int row)
{
	ft_putnbr(*(edge + (2 * size) + row));
	ft_putstr(" | ");
}

void	ft_print_edge_right(int *edge, int size, int row)
{
	ft_putstr("| ");
	ft_putnbr(*(edge + (3 * size) + row));
}
