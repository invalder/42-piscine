/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 00:06:24 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/11 07:32:06 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str && *str++)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	char	*ptr;
	int		len;

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

/*
int	main(int c, char **v)
{
	char *src;
	char *dest;

	if (c == 2)
	{
		src = v[1];
		dest = ft_strdup(src);
		printf("result is %s\n", dest);
		free(dest);
		src = NULL;
		dest = NULL;
	}
	free(dest);
	dest = NULL;
	return (0);
}
*/
