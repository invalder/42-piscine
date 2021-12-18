/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_edge.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjerddee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 13:35:01 by pjerddee          #+#    #+#             */
/*   Updated: 2021/12/04 23:11:33 by nyangsua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	*get_edge(int x, int y, int *its_edge, int *edge)
{
	int	*ptr_its_edge;

	ptr_its_edge = &its_edge[0];
	its_edge[0] = edge[x];
	its_edge[1] = edge[4 + x];
	its_edge[2] = edge[8 + y];
	its_edge[3] = edge[12 + y];
	return (ptr_its_edge);
}

/*int	main(void)
{
	int	edge[16] = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2};
	int	its_edge[4];
	int	*pits_edge;
	int	*p_edge;

	p_edge = &edge[0];
	pits_edge = &its_edge[0];
	pits_edge = get_edge(2, 1, pits_edge, p_edge);
	return (0);
}*/
