/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:25:44 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/17 09:41:59 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (*str)
	{
		str++;
		cnt++;
	}
	return (cnt);
}

char	*ft_strdup(char *str)
{
	char	*dest;
	char	*ptr;
	int	len;

	len = ft_strlen(src);
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	ptr = dest;
	while (*src)
	{
		*ptr = *src;
		src++;
		ptr++;
	}
	*ptr = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock_str;
	int			i;

	i = 0;
	stock_str = malloc(sizeof(t_stock_str) * (ac + 1));

	while (i < ac)
	{
		stock_str[i]->size = ft_strlen(av[i]);
		stock_str[i]->str = av[i];
		stock_str[i]->copy = ft_strdup(av[i]);
		i++;
	}
	stock_str[i]->size = 0;
	stock_str[i]->str = 0;
	stock_str[i]->copy = 0;
	return (stock_str);
}

int	main(int ac, char **av)
{

	if (ac > 1)
	{
		
	}
	return (0);
}
