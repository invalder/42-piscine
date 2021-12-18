/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 09:11:23 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/05 16:49:34 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_error(void);
int		ft_chkinput_len(char *str);
int		ft_block_edge_main(int size, char *str);

int	main(int argc, char **argv)
{
	int	size;
	int	res;

	if (argc != 2)
	{
		ft_error();
		return (-1);
	}
	else
	{
		size = ft_chkinput_len(argv[1]);
		if (size < 0)
		{
			ft_error();
			return (-1);
		}
		else
		{
			res = ft_block_edge_main(size, argv[1]);
		}
	}
	return (res);
}
