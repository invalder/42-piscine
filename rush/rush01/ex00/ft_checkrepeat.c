/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkrepeat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:51:37 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/05 14:20:26 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		if_1_exist(int prop_bin);
int		if_2_exist(int prop_bin);
int		if_3_exist(int prop_bin);
int		if_4_exist(int prop_bin);
int		if_single_prop(int prop_bin);
int		ft_checkcomplete(int *block);
int		*ft_checkrepeat(int *edge, int *block, int size);
int		*ft_check_block_vert(int *block, int r, int c, int size);
int		*ft_check_block_horz(int *block, int r, int c, int size);
void	ft_print_block_prop(int *edge, int *block, int size, int is_prop);
void	ft_updateprop(int *target, int *cursor);

int	ft_checkcomplete(int *block)
{
	int	*ptr;
	int	cnt;

	cnt = 0;
	ptr = block;
	while (*ptr)
	{
		if (!(if_single_prop(*ptr)))
		{
			cnt++;
		}
		ptr++;
	}
	return (cnt);
}

int	*ft_checkrepeat(int *edge, int *block, int size)
{
	int	r;
	int	c;
	int	*ptr_ref;
	int	*ptr_edge;

	r = 0;
	c = 0;
	ptr_ref = block;
	ptr_edge = edge;
	while (r < size)
	{
		c = 0;
		while (c < size)
		{
			ft_check_block_vert(ptr_ref, r, c, size);
			ft_check_block_horz(ptr_ref, r, c, size);
			c++;
		}
		r++;
	}
	return (block);
}

int	*ft_check_block_vert(int *block, int r, int c, int size)
{
	int	*ptr_ref;
	int	*ptr_run;
	int	row;

	row = 0;
	ptr_run = block + c;
	ptr_ref = block + (size * r) + c;
	while (row < size)
	{
		if (row == r)
		{
			ptr_run += size;
			row++;
			continue ;
		}
		if (if_single_prop(*ptr_run))
		{
			ft_updateprop(ptr_ref, ptr_run);
		}
		ptr_run += size;
		row++;
	}
	return (block);
}

int	*ft_check_block_horz(int *block, int r, int c, int size)
{
	int	*ptr_ref;
	int	*ptr_run;
	int	col;

	col = 0;
	ptr_run = block + (size * r);
	ptr_ref = block + (size * r) + c;
	while (col < size)
	{
		if (col == c)
		{
			ptr_run++;
			col++;
			continue ;
		}
		if (if_single_prop(*ptr_run))
		{
			ft_updateprop(ptr_ref, ptr_run);
		}
		ptr_run++;
		col++;
	}
	return (block);
}

void	ft_updateprop(int *target, int *cursor)
{
	if (!if_single_prop(*target))
	{
		if (*cursor == 8 && if_4_exist(*target))
			*target -= 8;
		if (*cursor == 4 && if_3_exist(*target))
			*target -= 4;
		if (*cursor == 2 && if_2_exist(*target))
			*target -= 2;
		if (*cursor == 1 && if_1_exist(*target))
			*target -= 1;
	}
}
