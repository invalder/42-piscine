/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_visibility.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjerddee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 15:38:21 by pjerddee          #+#    #+#             */
/*   Updated: 2021/12/05 17:32:59 by nyangsua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putconv_int(int nbr);
int	check_viewpoint(int viewpoint, int *tower);
int	check_visibility(int *block, int *edge);
int	*ext_downward(int i, int *block, int *tower);
int	*ext_upward(int i, int *block, int *tower);
int	*ext_forward(int i, int *block, int *tower);
int	*ext_backward(int i, int *block, int *tower);

int	check_visibility(int *block, int *edge)
{
	int	i;
	int	tower[4];
	int	*p_tower;

	i = 0;
	p_tower = &tower[0];
	while (i < 16)
	{
		if (i < 4)
			p_tower = ext_downward(i, block, p_tower);
		else if (i < 8)
			p_tower = ext_upward(i, block, p_tower);
		else if (i < 12)
			p_tower = ext_forward(i, block, p_tower);
		else
			p_tower = ext_backward(i, block, p_tower);
		if (!check_viewpoint(*(edge + i), p_tower))
			return (0);
		i++;
	}
	return (1);
}
