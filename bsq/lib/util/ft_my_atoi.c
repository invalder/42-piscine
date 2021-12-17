/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_my_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjerddee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 01:40:14 by pjerddee          #+#    #+#             */
/*   Updated: 2021/12/16 16:37:16 by pjerddee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

//get number of lines from map's first line
int	ft_my_atoi(char *str)
{
	int	i;
	int	l_len;
	int	n_line;

	i = 0;
	n_line = 0;
	l_len = ft_linelen(str);
	while (i < l_len - 3 && ft_is_number(str[i]))
	{
		n_line = (n_line * 10) + (str[i] - '0');
		i++;
	}
	return (n_line);
}
