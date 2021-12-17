/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 05:57:27 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/11 14:32:56 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

int	ft_length(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ((size - 1) * ft_strlen(sep)) + 1;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*buff;
	int		len;

	buff = dest;
	len = ft_strlen(src);
	while (*buff)
		buff++;
	while (len && *src)
	{
		*buff = *src;
		buff++;
		src++;
	}
	*buff = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	i = 0;
	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	str = malloc(sizeof(char *) * ft_length(size, strs, sep));
	if (!str)
		return (NULL);
	*str = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
/*
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
*/
/*
 * ./a.out "<sep string>" 123 123 456
*/
/*
int	main(int c, char **v)
{
	char	*rcvr;
	char	sep[2];

	ft_strcpy(sep, v[1]);
	rcvr = ft_strjoin(c - 2, &v[2], &sep[0]);
	printf("output: %s\n", rcvr);
	return (0);
}
*/
