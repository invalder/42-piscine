/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjerddee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:14:13 by pjerddee          #+#    #+#             */
/*   Updated: 2021/12/05 10:58:37 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	*rule14vert(int row, int i, int *block, int *id_edge);
int	*rule41vert(int row, int i, int *block, int *id_edge);
int	*rule13vert(int row, int i, int *block, int *id_edge);
int	*rule31vert(int row, int i, int *block, int *id_edge);
int	if_1_exist(int prop_bin);
int	if_2_exist(int prop_bin);
int	if_3_exist(int prop_bin);
int	if_4_exist(int prop_bin);

int	*rule14vert(int row, int i, int *block, int *id_edge)
{
	int	*p_block;

	p_block = &block[0];
	if (id_edge[0] == 1 && id_edge[1] == 4)
	{
		if (row == 0)
			*(block + i) = 8;
		else if (row == 1)
			*(block + i) = 4;
		else if (row == 2)
			*(block + i) = 2;
		else if (row == 3)
			*(block + i) = 1;
	}
	return (p_block);
}

int	*rule41vert(int row, int i, int *block, int *id_edge)
{
	int	*p_block;

	p_block = &block[0];
	if (id_edge[0] == 4 && id_edge[1] == 1)
	{
		if (row == 0)
			*(block + i) = 1;
		else if (row == 1)
			*(block + i) = 2;
		else if (row == 2)
			*(block + i) = 4;
		else if (row == 3)
			*(block + i) = 8;
	}
	return (p_block);
}

int	*rule13vert(int row, int i, int *block, int *id_edge)
{
	int	*p_block;

	p_block = &block[0];
	if (id_edge[0] == 1 && id_edge[1] == 3)
	{
		if (row == 0)
			*(block + i) = 8;
		else if (row == 2 && if_2_exist(*(block + i)))
			*(block + i) = *(block + i) - 2;
		else if (row == 3 && if_3_exist(*(block + i)))
			*(block + i) = *(block + i) - 4;
	}
	return (p_block);
}

int	*rule31vert(int row, int i, int *block, int *id_edge)
{
	int	*p_block;

	p_block = &block[0];
	if (id_edge[0] == 3 && id_edge[1] == 1)
	{
		if (row == 0 && if_3_exist(*(block + i)))
			*(block + i) = *(block + i) - 4;
		else if (row == 1 && if_2_exist(*(block + i)))
			*(block + i) = *(block + i) - 2;
		else if (row == 3)
			*(block + i) = 8;
	}
	return (p_block);
}
