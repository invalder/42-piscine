/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utility4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyangsua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 20:43:14 by nyangsua          #+#    #+#             */
/*   Updated: 2021/12/05 21:21:33 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_half_prop(int *block);
int	chck5050first(int prop_bin);
int	chck5050second(int prop_bin);
int	if_half_prop(int prop_bin);

int	check_half_prop(int *block)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (if_half_prop(*(block + i)))
			return (i);
		i++;
	}
	return (-1);
}

int	chck5050first(int prop_bin)
{
	if (if_half_prop(prop_bin))
	{
		if ((prop_bin % 2) == 1)
			return (1);
		else if (prop_bin < 12)
			return (2);
		else
			return (4);
	}
	return (-1);
}

int	chck5050second(int prop_bin)
{
	if (if_half_prop(prop_bin))
	{
		if (prop_bin < 4)
			return (2);
		else if (prop_bin < 7)
			return (4);
		else if (prop_bin < 13)
			return (8);
	}
	return (-1);
}
