/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_block_edge_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:22:56 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/05 21:48:39 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
void	ft_putconv(int nbr);
void	ft_error(void);
void	ft_print_block_prop(int *edge, int *block, int size, int is_prop);
void	ft_block_operation(int *block, int *edge, int size, int bypass);
void	ft_random_operation(int *block, int *edge, int size, int is_first);		
int		*ft_checkrepeat(int *edge, int *block, int size);
int		ft_create_edge(char *str, int size, int *edge);
int		ft_create_block(int size, int *block);
int		*check_rules(int *block, int *edge);
int		ft_checkcomplete(int *block);
int		ft_checkinput_edge(int *edge, int size);
int		check_visibility(int *block, int *edge);

int	ft_block_edge_main(int size, char *str)
{
	int	*edge;
	int	*block;
	int	*p_ref;

	edge = malloc(sizeof(int) * ((size * 4) + 1));
	block = malloc(sizeof(int) * ((size * size) + 1));
	p_ref = edge;
	if (ft_create_edge(str, size, edge) == 1)
	{
		p_ref = block;
		if (ft_create_block(size, p_ref) == 1)
			ft_block_operation(block, edge, size, 0);
		if (ft_checkcomplete(p_ref) > 0 || check_visibility(p_ref, edge) == 0)
			ft_random_operation(block, edge, size, 1);
		if (ft_checkcomplete(p_ref) > 0 || check_visibility(p_ref, edge) == 0)
			ft_random_operation(block, edge, size, 0);
		if (ft_checkcomplete(p_ref) > 0 || check_visibility(p_ref, edge) == 0)
			ft_putstr("Sorry, Problem can not be solved.\n");
		ft_print_block_prop(edge, p_ref, size, 0);
	}
	else
		return (-1);
	return (0);
}

void	ft_block_operation(int *block, int *edge, int size, int bypass)
{
	int	*p_ref;
	int	loop;

	loop = 0;
	if (ft_checkinput_edge(edge, size) > 0 || bypass)
	{
		if (bypass == 0)
			p_ref = check_rules(block, edge);
		else
			p_ref = block;
		while ((ft_checkcomplete(p_ref)) > 0 && loop < 100)
		{
			p_ref = ft_checkrepeat(edge, p_ref, size);
			loop++;
		}
	}
	else
		ft_error();
}

int	ft_create_edge(char *str, int size, int *edge)
{
	int	*edge_buff;

	edge_buff = &edge[0];
	while (*str)
	{
		if (*str == ' ' || *str == '\t')
		{
			str++;
			continue ;
		}
		if (*str >= '1' && *str <= ('0' + size))
		{
			if (*(str + 1) == ' ' || *(str + 1) == '\t' || *(str + 1) == '\0')
				*edge_buff = *str - 48;
			else
				return (-1);
		}
		edge_buff++;
		str++;
	}
	if (size)
		*edge_buff = '\0';
	return (1);
}

int	ft_create_block(int size, int *block)
{
	int	i;
	int	*block_buff;

	i = 0;
	block_buff = &block[0];
	while (i < (size * size))
	{
		*block_buff = 15;
		block_buff++;
		i++;
	}
	*block_buff = '\0';
	if (size)
		return (1);
	return (0);
}
