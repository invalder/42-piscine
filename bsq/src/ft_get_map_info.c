/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map_info.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjerddee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:34:32 by pjerddee          #+#    #+#             */
/*   Updated: 2021/12/16 17:54:42 by pjerddee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "util.h"

void	ft_get_map_info(char *map, t_map_info *map_info)
{
	int		l_len;

	l_len = ft_linelen(map);
	if (*(map + l_len + 1) == '\0')
	{
		map_info->width = 0;
		map_info->height = 0;
	}
	else
	{
		map_info->width = ft_linelen(map + l_len + 1);
		map_info->height = ft_my_atoi(map);
	}
	map_info->full = map[l_len - 1];
	map_info->obstacle = map[l_len - 2];
	map_info->empty = map [l_len - 3];
}
