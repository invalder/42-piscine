/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_random_block.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 20:45:01 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/05 21:50:08 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_half_prop(int *block);
int		chck5050first(int prop_bin);
int		chck5050second(int prop_bin);
void	ft_duplicate_block(int *dest, int *src);
void	ft_block_operation(int *block, int *edge, int size, int bypass);
void	ft_random_operation(int *block, int *edge, int size, int is_first);

void	ft_duplicate_block(int *dest, int *src)
{
	while (*src)
	{
		*dest = *src;
		 src++;
		 dest++;
	}
}

void	ft_random_operation(int *block, int *edge, int size, int is_first)
{
	int	*ptr_block;
	int	*ptr_dup;
	int	*ptr_target;

	ptr_block = block;
	ptr_dup = malloc(sizeof(int) * ((size * size) + 1));
	ft_duplicate_block(ptr_dup, block);
	ptr_target = block;
	ptr_target += check_half_prop(ptr_dup);
	if (is_first)
		*ptr_target = chck5050first(*ptr_target);
	else
		*ptr_target = chck5050second(*ptr_target);
	ft_block_operation(block, edge, size, 1);
}
