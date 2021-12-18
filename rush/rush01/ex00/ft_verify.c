/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verify.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 10:29:32 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/05 17:58:23 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
void	ft_error(void);
int		ft_checkinput_edge(int *edge, int size);

int	ft_chkinput_len(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		if (*str == ' ' || *str == '\t')
		{
			str++;
			continue ;
		}
		else if (*str >= '1' && *str <= '4')
		{
			if (*(str + 1) == ' ' || *(str + 1) == '\t' || *(str + 1) == '\0')
				len++;
			else
				return (-1);
		}
		else
			return (-1);
		str++;
	}
	if (len % 4 == 0)
		return (len / 4);
	return (-1);
}

int	ft_checkinput_edge(int *edge, int size)
{
	int	*ptr_edge;
	int	cursor;

	cursor = 0;
	ptr_edge = edge;
	while (cursor < size)
	{
		if (*(ptr_edge + cursor) + *(ptr_edge + cursor + size) < 3)
		{
			ft_putstr("Please Verify Vertical Input\n");
			return (-1);
		}
		if (*(ptr_edge + cursor + (size * 2))
			+ *(ptr_edge + cursor + (size * 3)) > 5)
		{
			ft_putstr("Please Verify Horizontal Input\n");
			return (-1);
		}
		cursor++;
	}
	return (1);
}
