/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjerddee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 20:22:35 by pjerddee          #+#    #+#             */
/*   Updated: 2021/12/17 21:52:15 by pjerddee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "util.h"

void	bsq_stdin_opr(char *map)
{
	char		**pp_map;
	t_map_info	*map_info;

	pp_map = NULL;
	map_info = malloc(sizeof(t_map_info));
	ft_get_map_info(map, map_info);
	if (ft_is_valid_map(map, map_info))
	{
		pp_map = pp_map_alloc(pp_map, map, map_info);
		map_decalloc(pp_map, map, map_info);
	}
	else
		ft_putstr_err("map error\n");
}

void	map_decalloc_stdin(char **pp_map, t_map_info *map_info)
{
	int	h;
	int	i;

	h = 0;
	while (h < map_info->height)
	{
		i = 0;
		while (i < map_info->width + 1)
		{
			pp_map[h][i] = 0;
			i++;
		}
		free(pp_map[h]);
		h++;
	}
	free(pp_map);
	free(map_info);
	pp_map = NULL;
	map_info = NULL;
}

void	bsq_stdin_main(void)
{
	char	*buff;
	char	*ptr;

	buff = malloc(sizeof(char) * 4000 * 4000);
	ptr = buff;
	while (read(0, ptr, 1) > 0)
		if (*ptr++ == '\0')
			break ;
	*(ptr) = '\0';
	bsq_stdin_opr(buff);
	free(buff);
}
