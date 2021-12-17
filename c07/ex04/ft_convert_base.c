/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 21:22:57 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/13 01:17:18 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_chk_base(char *base);
int	ft_atoi_base(char *str, char *base);

int	ft_num2base_len(int num, int b_len, int len)
{
	if (num > (b_len) - 1)
		return (ft_num2base_len(num / b_len, b_len, len + 1));
	else
		return (len);
}

void	ft_num2base(char *nbr, char *base, int b_len, int num)
{
	if (num > (b_len - 1))
		ft_num2base(nbr - 1, base, b_len, num / b_len);
	*nbr = base[num % b_len];
}

char	*ft_convert_base(char *nbr, char *base_form, char *base_to)
{
	char	*res;
	long	num;
	int		neg;
	int		size;
	int		b_to_len;

	neg = 0;
	num = 0;
	b_to_len = ft_chk_base(base_to);
	if (ft_chk_base(base_form) < 2 || b_to_len < 2)
		return (NULL);
	num = ft_atoi_base(nbr, base_form);
	if (num < 0)
	{
		neg = 1;
		num *= -1;
	}
	size = sizeof(*res) * (ft_num2base_len(num, b_to_len, 1) + neg);
	res = (char *) malloc(size);
	if (neg)
		*(res++) = '-';
	ft_num2base(res + size - 1 - neg, base_to, b_to_len, num);
	return (res - neg);
}

//	./a.out "<nbr>" "base" "final_base"
/*
int	main(int c, char **v)
{
	char	*final;

	if (c == 4)
	{
		final = ft_convert_base(v[1], v[2], v[3]);
		printf("%s\n", final);
		free(final);
	}
	return (0);
}
*/
