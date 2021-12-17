/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 05:39:45 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/11 09:34:01 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	add;
	int	*ptr;

	add = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ptr = malloc(sizeof(*ptr) * (max - min));
	*range = ptr;
	if (ptr == NULL)
		return (-1);
	while (add < (max - min))
	{
		ptr[add] = min + add;
		add++;
	}
	return (add);
}
/*
int	main(void)
{
	int	*range;
	int	min;
	int	max;
	int	i;
	int	size;

	min = 0;
	max = 10;
	i = 0;
	size = ft_ultimate_range(&range, min, max);
	printf("size: %d\tmin: %d\tmax: %d\n", size, min, max);
	while (i < size)
	{
		printf("index : %d\tvalue: %d\n", i, range[i]);
		i++;
	}
	free(range);
	range = NULL;
	return (0);
}
*/
