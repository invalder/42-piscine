/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 20:49:44 by nnakarac          #+#    #+#             */
/*   Updated: 2021/12/12 01:06:45 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_chk_base(char *base)
{
	char	*chk;
	char	*dup;
	int		i;

	i = 0;
	chk = base;
	dup = base;
	if (*chk == '\0' || *(chk + 1) == '\0')
		return (0);
	while (*chk)
	{
		dup = chk + 1;
		if (*chk == '+' || *chk == '-' || *chk < 33 || *chk > 126)
			return (0);
		while (*dup)
		{
			if (*(dup++) == *chk)
				return (0);
		}
		chk++;
		i++;
	}
	return (i);
}

int	ft_chk_val(char *str, char *base)
{
	int	i;

	i = 0;
	while (*str && *(base++) != *str)
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int		b_len;
	int		neg;
	long	num;

	neg = 1;
	num = 0;
	b_len = ft_chk_base(base);
	while (b_len > 1 && *str && *str <= 32)
		str++;
	while (b_len > 1 && *str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	while (b_len > 1 && *str > 32 && !(*str == '-' || *str == '+'))
	{
		if (ft_chk_val(str, base) > b_len)
			break ;
		num = (num * b_len) + ft_chk_val(str++, base);
	}
	return (num * neg);
}
