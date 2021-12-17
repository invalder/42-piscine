/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_occupy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjerddee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:47:51 by pjerddee          #+#    #+#             */
/*   Updated: 2021/12/16 18:51:16 by pjerddee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "util.h"

void	set_occupy(int min_x, int min_y, int size, t_occupy *occupy)
{
	occupy->min_x = min_x;
	occupy->min_y = min_y;
	occupy->size = size;
}

t_occupy	occupy_cmp(t_occupy occ_old, t_occupy occ_new)
{
	if (occ_old.size < occ_new.size)
	{
		set_occupy(occ_new.min_x, occ_new.min_y, occ_new.size, &occ_old);
	}
	return (occ_old);
}

void	occupy_map(t_occupy occupy, char **pp_map, t_map_info *map_info)
{
	int	i;
	int	j;

	i = 0;
	while (i < occupy.size)
	{
		j = 0;
		while (j < occupy.size)
			pp_map[occupy.min_y + i][occupy.min_x + j++] = map_info->full;
		i++;
	}
}

void	unoccupy_map(t_occupy occupy, char **pp_map, t_map_info *map_info)
{
	int	i;
	int	j;

	i = 0;
	while (i < map_info->height)
	{
		j = 0;
		while (j < map_info->width)
		{
			if ((i < occupy.min_y || i >= occupy.min_y + occupy.size)
				|| (j < occupy.min_x || j >= occupy.min_x + occupy.size))
			{
				if (pp_map[i][j] == map_info->full)
					pp_map[i][j] = map_info->empty;
			}
			j++;
		}
		i++;
	}
}
