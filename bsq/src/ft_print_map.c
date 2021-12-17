/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjerddee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:49:40 by pjerddee          #+#    #+#             */
/*   Updated: 2021/12/17 20:08:31 by pjerddee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"
#include "bsq.h"

void	ft_print_map(char **pp_map, t_map_info *map_info)
{
	int	row;
	int	col;

	row = 0;
	while (row < map_info->height)
	{
		col = 0;
		while (col < map_info->width)
		{
			write (1, &pp_map[row][col], 1);
			col++;
		}
		ft_putstr("\n");
		row++;
	}
}
