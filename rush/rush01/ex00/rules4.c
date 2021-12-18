/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyangsua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 22:46:16 by nyangsua          #+#    #+#             */
/*   Updated: 2021/12/05 03:41:16 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	*rule12horz(int col, int i, int *block, int *id_edge);
int	*rule21horz(int col, int i, int *block, int *id_edge);
int	*rule23horz(int col, int i, int *block, int *id_edge);
int	*rule32horz(int col, int i, int *block, int *id_edge);
int	*rule22horz(int col, int i, int *block, int *id_edge);
int	if_1_exist(int prop_bin);
int	if_2_exist(int prop_bin);
int	if_3_exist(int prop_bin);
int	if_4_exist(int prop_bin);

int	*rule12horz(int col, int i, int *block, int *id_edge)
{
	int	*p_block;

	p_block = &block[0];
	if (id_edge[2] == 1 && id_edge[3] == 2)
	{
		if (col == 0)
			*(block + i) = 8;
		else if (col == 3)
			*(block + i) = 4;
	}
	return (p_block);
}

int	*rule21horz(int col, int i, int *block, int *id_edge)
{
	int	*p_block;

	p_block = &block[0];
	if (id_edge[2] == 2 && id_edge[3] == 1)
	{
		if (col == 0)
			*(block + i) = 4;
		else if (col == 3)
			*(block + i) = 8;
	}
	return (p_block);
}

int	*rule23horz(int col, int i, int *block, int *id_edge)
{
	int	*p_block;

	p_block = &block[0];
	if (id_edge[2] == 2 && id_edge[3] == 3)
	{
		if (col == 1)
			*(block + i) = 8;
		else if (col == 2 && if_1_exist(*(block + i)))
			*(block + i) = *(block + i) - 1;
		else if (col == 3 && if_3_exist(*(block + i)))
			*(block + i) = *(block + i) - 4;
	}
	return (p_block);
}

int	*rule32horz(int col, int i, int *block, int *id_edge)
{
	int	*p_block;

	p_block = &block[0];
	if (id_edge[2] == 3 && id_edge[3] == 2)
	{
		if (col == 0 && if_3_exist(*(block + i)))
			*(block + i) = *(block + i) - 4;
		else if (col == 1 && if_1_exist(*(block + i)))
			*(block + i) = *(block + i) - 1;
		else if (col == 2)
			*(block + i) = 8;
	}
	return (p_block);
}

int	*rule22horz(int col, int i, int *block, int *id_edge)
{
	int	*p_block;

	p_block = &block[0];
	if (id_edge[2] == 2 && id_edge[3] == 2)
	{
		if (col == 0 && if_4_exist(*(block + i)))
			*(block + i) = *(block + i) - 8;
		else if (col == 3 && if_4_exist(*(block + i)))
			*(block + i) = *(block + i) - 8;
	}
	return (p_block);
}
