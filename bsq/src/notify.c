/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   notify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 13:10:16 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/16 18:18:35 by pjerddee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "util.h"

void	notify_user(char *msg, char *color)
{
	ft_putstr(color);
	ft_putstr(msg);
	ft_putstr(RESET);
}

void	print_map_info(t_map_info *map_info, int size, char *map_name)
{
	notify_user("\n\n----Map information----\n\n", GRN);
	notify_user("Map Name\t", YEL);
	notify_user(map_name, BLU);
	notify_user("\n", WHT);
	notify_user("File Size\t", YEL);
	ft_putstr(BLU);
	ft_putnbr(size);
	notify_user("\nMap width\t", YEL);
	ft_putstr(BLU);
	ft_putnbr(map_info->width);
	notify_user("\nMap Height\t", YEL);
	ft_putstr(BLU);
	ft_putnbr(map_info->height);
	notify_user("\nEmpty Char\t", YEL);
	ft_putchar(map_info->empty);
	notify_user("\nObstacle Char\t", YEL);
	ft_putstr(RED);
	ft_putchar(map_info->obstacle);
	notify_user("\nFull Char\t", YEL);
	ft_putstr(GRN);
	ft_putchar(map_info->full);
	notify_user("\n", WHT);
}

void	print_map_soln_info(t_occupy	occ)
{
	notify_user("\n\n----Solution information----\n\n", GRN);
	notify_user("Start X\t\t", YEL);
	ft_putstr(BLU);
	ft_putnbr(occ.min_x);
	notify_user("\n", WHT);
	notify_user("Start Y\t\t", YEL);
	ft_putstr(BLU);
	ft_putnbr(occ.min_y);
	notify_user("\n", WHT);
	notify_user("Size\t\t", YEL);
	ft_putstr(BLU);
	ft_putnbr(occ.size);
	notify_user("\n", WHT);
}
