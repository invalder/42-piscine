/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjerddee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 23:46:02 by pjerddee          #+#    #+#             */
/*   Updated: 2021/12/15 00:57:55 by pjerddee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*buff;

	i = 0;
	buff = dest;
	while (i < n)
	{
		if (src[i] != 0)
			buff[i] = src[i];
		i++;
	}
	buff[i] = '\0';
	return (dest);
}
