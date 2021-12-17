/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_biggest_square.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjerddee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:40:26 by pjerddee          #+#    #+#             */
/*   Updated: 2021/12/16 01:01:11 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "util.h"

t_occupy	find_biggest_square(char **pp_map, t_map_info *map_info)
{
	int			x;
	int			y;
	t_occupy	new_occ;
	t_occupy	old_occ;

	y = 0;
	set_occupy(0, 0, 0, &old_occ);
	while (y < map_info->height)
	{
		if (y + old_occ.size > map_info->height)
			break ;
		x = 0;
		while (pp_map[y][x] != '\0')
		{
			if (x + old_occ.size > map_info->width)
				break ;
			new_occ = ck_sqr_size(x, y, pp_map, map_info);
			old_occ = occupy_cmp(old_occ, new_occ);
			x++;
		}
		y++;
	}
	return (old_occ);
}
