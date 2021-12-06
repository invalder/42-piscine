/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 02:54:02 by nnakarac          #+#    #+#             */
/*   Updated: 2021/11/29 10:57:31 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *tab, int first, int second);
int		ft_partition(int *a, int start, int end);
void	ft_quick_sort(int *a, int start, int end);

void	ft_sort_int_tab(int *tab, int size)
{
	ft_quick_sort(tab, 0, size - 1);
}

void	ft_swap(int *tab, int first, int second)
{
	int	temp;

	temp = tab[first];
	tab[first] = tab[second];
	tab[second] = temp;
}

int	ft_partition(int *tab, int start, int end)
{
	int	pivot;
	int	i;
	int	j;

	pivot = tab[end];
	i = (start - 1);
	j = start;
	while (j < end)
	{
		if (tab[j] < pivot)
		{
			i++;
			ft_swap(tab, i, j);
		}
		j++;
	}
	ft_swap(tab, i + 1, end);
	return (i + 1);
}

void	ft_quick_sort(int *tab, int start, int end)
{
	int	p;

	if (start < end)
	{
		p = ft_partition(tab, start, end);
		ft_quick_sort(tab, start, p - 1);
		ft_quick_sort(tab, p + 1, end);
	}
}
