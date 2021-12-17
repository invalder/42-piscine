/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_sqr_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 00:17:11 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/16 17:21:32 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "util.h"

t_occupy	ck_sqr_size(int x, int y, char **pp_map, t_map_info *map_info)
{
	int			i;
	int			offset;
	int			stop;
	t_occupy	new_occ;

	set_occupy(x, y, 0, &new_occ);
	offset = 0;
	stop = 0;
	while (stop == 0 && pp_map[y][x] != map_info->obstacle)
	{
		if (y + offset >= map_info->height || x + offset >= map_info->width)
			stop = 1;
		i = 0;
		while (i <= offset && stop == 0)
		{
			if (pp_map[y + i][x + offset] == map_info->obstacle ||
				pp_map[y + offset][x + i] == map_info->obstacle)
				stop = 1;
			i++;
		}
		if (stop == 0)
			offset++;
	}
	set_occupy(x, y, offset, &new_occ);
	return (new_occ);
}
