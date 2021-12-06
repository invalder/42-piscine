/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 03:29:17 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/06 22:08:44 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_compare(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (*s1 > *s2)
			return (1);
		else if (*s1 < *s2)
			return (-1);
		if (*s1)
			s1++;
		if (*s2)
			s2++;
		i++;
	}
	return (0);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	result;

	result = ft_compare(s1, s2, n);
	return (result);
}
