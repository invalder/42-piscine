/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjerddee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 22:06:17 by pjerddee          #+#    #+#             */
/*   Updated: 2021/12/05 03:39:44 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	*rule12vert(int row, int i, int *block, int *id_edge);
int	*rule21vert(int row, int i, int *block, int *id_edge);
int	*rule23vert(int row, int i, int *block, int *id_edge);
int	*rule32vert(int row, int i, int *block, int *id_edge);
int	*rule22vert(int row, int i, int *block, int *id_edge);
int	if_1_exist(int prop_bin);
int	if_2_exist(int prop_bin);
int	if_3_exist(int prop_bin);
int	if_4_exist(int prop_bin);

int	*rule12vert(int row, int i, int *block, int *id_edge)
{
	int	*p_block;

	p_block = &block[0];
	if (id_edge[0] == 1 && id_edge[1] == 2)
	{
		if (row == 0)
			*(block + i) = 8;
		else if (row == 3)
			*(block + i) = 4;
	}
	return (p_block);
}

int	*rule21vert(int row, int i, int *block, int *id_edge)
{
	int	*p_block;

	p_block = &block[0];
	if (id_edge[0] == 2 && id_edge[1] == 1)
	{
		if (row == 0)
			*(block + i) = 4;
		else if (row == 3)
			*(block + i) = 8;
	}
	return (p_block);
}

int	*rule23vert(int row, int i, int *block, int *id_edge)
{
	int	*p_block;

	p_block = &block[0];
	if (id_edge[0] == 2 && id_edge[1] == 3)
	{
		if (row == 1)
			*(block + i) = 8;
		else if (row == 2 && if_1_exist(*(block + i)))
			*(block + i) = *(block + i) - 1;
		else if (row == 3 && if_3_exist(*(block + i)))
			*(block + i) = *(block + i) - 4;
	}
	return (p_block);
}

int	*rule32vert(int row, int i, int *block, int *id_edge)
{
	int	*p_block;

	p_block = &block[0];
	if (id_edge[0] == 3 && id_edge[1] == 2)
	{
		if (row == 0 && if_3_exist(*(block + i)))
			*(block + i) = *(block + i) - 4;
		else if (row == 1 && if_1_exist(*(block + i)))
			*(block + i) = *(block + i) - 1;
		else if (row == 2)
			*(block + i) = 8;
	}
	return (p_block);
}

int	*rule22vert(int row, int i, int *block, int *id_edge)
{
	int	*p_block;

	p_block = &block[0];
	if (id_edge[0] == 2 && id_edge[1] == 2)
	{
		if (row == 0 && if_4_exist(*(block + i)))
			*(block + i) = *(block + i) - 8;
		else if (row == 3 && if_4_exist(*(block + i)))
			*(block + i) = *(block + i) - 8;
	}
	return (p_block);
}
