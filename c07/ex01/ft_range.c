/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 05:07:29 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/11 07:34:34 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*ret_arr;
	int	*ptr;
	int	add;

	add = min;
	if (min >= max)
		return (NULL);
	ret_arr = malloc(sizeof(int) * (max - min));
	ptr = ret_arr;
	if (ret_arr == NULL)
		return (NULL);
	while (add < max)
	{
		*ptr = add;
		add++;
		ptr++;
	}
	return (ret_arr);
}

/*
int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	*rng;

	min = 5;
	max = 10;
	i = 0;
	rng = ft_range(min, max);
	printf("min: %d\tmax: %d\n", min, max);
	while (i < (max - min))
	{
		printf("index: %d\tvalue: %d\n", i, rng[i]);
		i++;
	}
	if (!rng)
		printf("nothing to print\n");
	else
	{
		free(rng);
		rng = NULL;
	}
	min = 10;
	max = 10;
	i = 0;
	rng = ft_range(min, max);
	printf("min: %d\tmax: %d\n", min, max);
	while (i < (max - min))
	{
		printf("index: %d\tvalue: %d\n", i, rng[i]);
		i++;
	}
	if (!rng)
		printf("nothing to print\n");
	else
	{
		free(rng);
		rng = NULL;
	}
	return (0);
}
*/
