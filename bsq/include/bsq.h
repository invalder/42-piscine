/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjerddee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:37:58 by pjerddee          #+#    #+#             */
/*   Updated: 2021/12/17 21:44:09 by pjerddee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

typedef struct s_map_info{
	int		height;
	int		width;
	char	obstacle;
	char	empty;
	char	full;
}	t_map_info;

typedef struct s_occupy{
	int	min_x;
	int	min_y;
	int	size;
}	t_occupy;

t_occupy	find_biggest_square(char **pp_map, t_map_info *map_info);
t_occupy	ck_sqr_size(int x, int y, char **pp_map, t_map_info *map_info);
t_occupy	occupy_cmp(t_occupy occ_old, t_occupy occ_new);
void		set_occupy(int min_x, int min_y, int size, t_occupy *occupy);
void		ft_get_map_info(char *map, t_map_info *map_info);
void		occupy_map(t_occupy occupy, char **pp_map, t_map_info *map_info);
void		unoccupy_map(t_occupy occupy, char **pp_map, t_map_info *map_info);
void		ft_print_map(char **pp_map, t_map_info *map_info);
void		map_decalloc(char **pp_map, char *map, t_map_info *map_info);
void		bsq_opr(char *map_name, int cnt, int ac);
void		err_file_not_exist(char *map_name);
void		err_map_custom(char *map_name, char *str);
void		notify_user(char *msg, char *color);
void		print_map_info(t_map_info *map_info, int size, char *map_name);
void		print_map_soln_info(t_occupy	occ);
void		bsq_stdin_opr(char *map);
void		map_decalloc_stdin(char **pp_map, t_map_info *map_info);
void		bsq_stdin_main(void);
char		**pp_map_alloc(char **pp_map, char *map, t_map_info *map_info);
char		*map_alloc(char *map, char *map_name, int size);
char		**ft_format_map(char *map, char **pp_map, t_map_info *map_info);
int			ft_is_valid_map(char *map, t_map_info *map_info);
int			ft_file_read(char *file, char *map);
int			ft_file_size(char *file);

#endif
