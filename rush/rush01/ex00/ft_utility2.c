/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utility2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjerddee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 18:06:14 by pjerddee          #+#    #+#             */
/*   Updated: 2021/12/04 18:24:35 by pjerddee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	if_1_exist(int prop_bin);
int	if_2_exist(int prop_bin);
int	if_3_exist(int prop_bin);
int	if_4_exist(int prop_bin);
int	if_single_prop(int prop_bin);

int	if_1_exist(int prop_bin)
{
	if (prop_bin % 2 == 1)
		return (1);
	else
		return (0);
}

int	if_2_exist(int prop_bin)
{
	if ((prop_bin / 2) % 2 == 1)
		return (1);
	else
		return (0);
}

int	if_3_exist(int prop_bin)
{
	if ((prop_bin / 4) % 2 == 1)
		return (1);
	else
		return (0);
}

int	if_4_exist(int prop_bin)
{
	if (prop_bin > 7)
		return (1);
	else
		return (0);
}

int	if_single_prop(int prop_bin)
{
	if (prop_bin == 1 || prop_bin == 2 || prop_bin == 4 || prop_bin == 8)
		return (1);
	else
		return (0);
}
