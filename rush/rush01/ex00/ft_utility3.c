/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utility3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjerddee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:13:50 by pjerddee          #+#    #+#             */
/*   Updated: 2021/12/05 21:20:37 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	which_row(int i);
int	which_col(int i);
int	ft_putconv_int(int nbr);
int	*b2d_single_prop(int *tower);
int	if_half_prop(int prop_bin);
int	if_single_prop(int prop_bin);

int	which_row(int i)
{
	if (i < 4)
		return (0);
	else if (i < 8)
		return (1);
	else if (i < 12)
		return (2);
	else if (i < 16)
		return (3);
	return (-1);
}

int	which_col(int i)
{
	return (i % 4);
}

int	ft_putconv_int(int nbr)
{
	if (nbr == 8)
		return (4);
	else if (nbr == 4)
		return (3);
	else if (nbr == 2)
		return (2);
	else if (nbr == 1)
		return (1);
	else
		return (0);
}

int	*b2d_single_prop(int *tower)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		*(tower + i) = ft_putconv_int(*(tower + i));
		i++;
	}
	return (tower);
}

int	if_half_prop(int prop_bin)
{
	if (prop_bin < 13 && !if_single_prop(prop_bin)
		&& prop_bin != 7 && prop_bin != 11)
		return (1);
	else
		return (0);
}
