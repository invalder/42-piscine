/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linelen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjerddee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 01:40:05 by pjerddee          #+#    #+#             */
/*   Updated: 2021/12/14 21:55:38 by pjerddee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

int	ft_linelen(char *str)
{
	int	l_len;

	l_len = 0;
	while (str[l_len] != '\n')
		l_len++;
	return (l_len);
}