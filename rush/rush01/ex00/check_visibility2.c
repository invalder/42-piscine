/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_visibility2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjerddee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 17:26:42 by pjerddee          #+#    #+#             */
/*   Updated: 2021/12/05 17:45:31 by nyangsua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	*b2d_single_prop(int *tower);
int	*ext_downward(int i, int *block, int *tower);
int	*ext_upward(int i, int *block, int *tower);
int	*ext_forward(int i, int *block, int *tower);
int	*ext_backward(int i, int *block, int *tower);
int	check_viewpoint(int viewpoint, int *tower);

int	check_viewpoint(int viewpoint, int *tower)
{
	int	cnt;
	int	i;
	int	sum;
	int	min;

	cnt = 1;
	i = 0;
	sum = 0;
	min = tower[0];
	while (i < 4)
	{
		if (tower[i] > min)
		{
			cnt++;
			min = tower[i];
		}
		sum += tower[i];
		i++;
	}
	if (sum > 10)
		return (0);
	if (cnt == viewpoint)
		return (1);
	else
		return (0);
}

int	*ext_downward(int i, int *block, int *tower)
{
	int	row;

	row = 0;
	while (row < 4)
	{
		tower[row] = *(block + (4 * row) + (i % 4));
		row++;
	}
	tower = b2d_single_prop(tower);
	return (tower);
}

int	*ext_upward(int i, int *block, int *tower)
{
	int	row;

	row = 3;
	while (row >= 0)
	{
		tower[3 - row] = *(block + (4 * row) + (i % 4));
		row--;
	}
	tower = b2d_single_prop(tower);
	return (tower);
}

int	*ext_forward(int i, int *block, int *tower)
{
	int	col;

	col = 0;
	while (col < 4)
	{
		tower[col] = *(block + (4 * (i % 4)) + (col));
		col++;
	}
	tower = b2d_single_prop(tower);
	return (tower);
}

int	*ext_backward(int i, int *block, int *tower)
{
	int	col;

	col = 3;
	while (col >= 0)
	{
		tower[3 - col] = *(block + (4 * (i % 4)) + (col));
		col--;
	}
	tower = b2d_single_prop(tower);
	return (tower);
}
