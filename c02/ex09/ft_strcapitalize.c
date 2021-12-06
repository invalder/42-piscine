/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:56:27 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/01 12:35:18 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_al_num(char c)
{
	if (c > 96 && c < 123)
		return (1);
	else if (c > 64 && c < 91)
		return (2);
	else if (c > 48 && c < 58)
		return (99);
	else
		return (0);
}

char	ft_to_cap_low(char c, int cap)
{
	if (c > 96 && c < 123 && cap)
		c -= 32;
	else if (c > 64 && c < 91 && !cap)
		c += 32;
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	char	*buff;
	int		i;

	i = 0;
	buff = str;
	while (*buff)
	{
		if (i == 0 && ft_check_al_num(*buff) == 1)
			*buff = ft_to_cap_low(*buff, 1);
		else if (ft_check_al_num(*buff) == 1
			&& ft_check_al_num(*(buff - 1)) == 0)
			*buff = ft_to_cap_low(*buff, 1);
		else if (ft_check_al_num(*buff) == 2
			&& ft_check_al_num(*(buff - 1)) == 0)
			*buff = ft_to_cap_low(*buff, 1);
		else
			*buff = ft_to_cap_low(*buff, 0);
		buff++;
		i++;
	}
	return (str);
}
