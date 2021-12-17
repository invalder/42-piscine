/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:19:06 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/17 20:02:41 by pjerddee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "util.h"

void	err_file_not_exist(char *map_name)
{
	ft_putstr_err(RED);
	ft_putstr_err("\nError, file not found!\t");
	ft_putstr_err("\n-------- ");
	ft_putstr_err(map_name);
	ft_putstr_err(" --------\n");
	ft_putstr_err(RESET);
}

void	err_map_custom(char *map_name, char *str)
{
	ft_putstr_err(RED);
	ft_putstr_err("\n");
	ft_putstr_err(str);
	ft_putstr_err("\n-------- ");
	ft_putstr_err(map_name);
	ft_putstr_err(" --------\n");
	ft_putstr_err(RESET);
}
