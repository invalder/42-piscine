/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rules.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjerddee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:22:48 by pjerddee          #+#    #+#             */
/*   Updated: 2021/12/05 04:34:46 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		which_row(int i);
int		which_col(int i);
int		*get_edge(int x, int y, int *its_edge, int *edge);
int		*rule14vert(int row, int i, int *block, int *id_edge);
int		*rule41vert(int row, int i, int *block, int *id_edge);
int		*rule13vert(int row, int i, int *block, int *id_edge);
int		*rule31vert(int row, int i, int *block, int *id_edge);
int		*rule12vert(int row, int i, int *block, int *id_edge);
int		*rule21vert(int row, int i, int *block, int *id_edge);
int		*rule23vert(int row, int i, int *block, int *id_edge);
int		*rule32vert(int row, int i, int *block, int *id_edge);
int		*rule22vert(int row, int i, int *block, int *id_edge);
int		*rule14horz(int col, int i, int *block, int *id_edge);
int		*rule41horz(int col, int i, int *block, int *id_edge);
int		*rule13horz(int col, int i, int *block, int *id_edge);
int		*rule31horz(int col, int i, int *block, int *id_edge);
int		*rule12horz(int col, int i, int *block, int *id_edge);
int		*rule21horz(int col, int i, int *block, int *id_edge);
int		*rule23horz(int col, int i, int *block, int *id_edge);
int		*rule32horz(int col, int i, int *block, int *id_edge);
int		*rule22horz(int col, int i, int *block, int *id_edge);
void	call_rules_vert(int row, int i, int *ptr_block, int *ptr_id_edge);
void	call_rules_horz(int col, int i, int *ptr_block, int *ptr_id_edge);
void	ft_print_block_prop(int *edge, int *block, int size, int is_prop);

int	*check_rules(int *block, int *edge)
{
	int	id_edge[4];
	int	*ptr_id_edge;
	int	i;

	ptr_id_edge = &id_edge[0];
	i = 0;
	while (i < 16)
	{
		ptr_id_edge = get_edge(which_col(i), which_row(i), ptr_id_edge, edge);
		call_rules_vert(which_row(i), i, block, ptr_id_edge);
		i++;
	}
	i = 0;
	while (i < 16)
	{
		ptr_id_edge = get_edge(which_col(i), which_row(i), ptr_id_edge, edge);
		call_rules_horz(which_col(i), i, block, ptr_id_edge);
		i++;
	}
	return (block);
}

void	call_rules_vert(int row, int i, int *ptr_block, int *ptr_id_edge)
{
	rule14vert(row, i, ptr_block, ptr_id_edge);
	rule41vert(row, i, ptr_block, ptr_id_edge);
	rule13vert(row, i, ptr_block, ptr_id_edge);
	rule31vert(row, i, ptr_block, ptr_id_edge);
	rule12vert(row, i, ptr_block, ptr_id_edge);
	rule21vert(row, i, ptr_block, ptr_id_edge);
	rule23vert(row, i, ptr_block, ptr_id_edge);
	rule32vert(row, i, ptr_block, ptr_id_edge);
	rule22vert(row, i, ptr_block, ptr_id_edge);
}

void	call_rules_horz(int col, int i, int *ptr_block, int *ptr_id_edge)
{
	rule14horz (col, i, ptr_block, ptr_id_edge);
	rule41horz (col, i, ptr_block, ptr_id_edge);
	rule13horz (col, i, ptr_block, ptr_id_edge);
	rule31horz (col, i, ptr_block, ptr_id_edge);
	rule12horz (col, i, ptr_block, ptr_id_edge);
	rule21horz (col, i, ptr_block, ptr_id_edge);
	rule23horz (col, i, ptr_block, ptr_id_edge);
	rule32horz (col, i, ptr_block, ptr_id_edge);
	rule22horz (col, i, ptr_block, ptr_id_edge);
}
