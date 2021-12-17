/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjerddee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:43:22 by pjerddee          #+#    #+#             */
/*   Updated: 2021/12/16 04:04:17 by pjerddee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "util.h"

char	**ft_format_map(char *map, char **pp_map, t_map_info *map_info)
{
	int	row;

	row = 0;
	map = map + ft_linelen(map) + 1;
	while (row < map_info->height)
	{
		ft_strncpy(pp_map[row], map, map_info->width);
		map += (map_info->width + 1);
		row++;
	}
	return (pp_map);
}
