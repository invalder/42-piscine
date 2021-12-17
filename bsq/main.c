/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 23:11:47 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/17 21:43:24 by pjerddee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"
#include "bsq.h"

int	main(int ac, char **av)
{
	int		cnt;
	char	*buff;
	char	*ptr;

	cnt = 0;
	buff = malloc(sizeof(char) * 4000 * 4000);
	ptr = buff;
	if (ac >= 2)
	{
		while (cnt++ < ac - 1)
			bsq_opr(av[cnt], cnt, ac);
	}	
	else
		bsq_stdin_main();
	return (0);
}

void	bsq_opr(char *map_name, int cnt, int ac)
{
	int			size;
	char		*map;
	char		**pp_map;
	t_map_info	*map_info;

	map = NULL;
	pp_map = NULL;
	size = ft_file_size(map_name);
	if (size <= 3)
		ft_putstr_err("map error\n");
	else
	{
		map = map_alloc(map, map_name, size);
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
	if (cnt < ac - 1)
		ft_putstr("\n");
}

char	**pp_map_alloc(char **pp_map, char *map, t_map_info *map_info)
{
	int			h;
	t_occupy	occ;

	h = 0;
	pp_map = malloc(sizeof(char *) * map_info->height);
	while (h < map_info->height)
	{
		pp_map[h] = malloc(sizeof(char) * (map_info->width + 1));
		h++;
	}
	ft_format_map(map, pp_map, map_info);
	occ = find_biggest_square(pp_map, map_info);
	occupy_map(occ, pp_map, map_info);
	unoccupy_map(occ, pp_map, map_info);
	ft_print_map(pp_map, map_info);
	return (pp_map);
}

char	*map_alloc(char *map, char *map_name, int size)
{
	map = malloc(sizeof(map) * size);
	ft_file_read(map_name, map);
	return (map);
}

void	map_decalloc(char **pp_map, char *map, t_map_info *map_info)
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
	free(map);
	free(map_info);
	pp_map = NULL;
	map = NULL;
	map_info = NULL;
}
