/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjerddee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:45:54 by pjerddee          #+#    #+#             */
/*   Updated: 2021/12/17 19:52:02 by pjerddee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"
#include "bsq.h"

int	ft_map_char_chk(char *map, t_map_info *m_inf);

int	ft_is_valid_map(char *map, t_map_info *m_inf)
{
	int		i;
	int		new_l_len;
	char	*line;

	i = 0;
	if (ft_linelen(map) < 4 || m_inf->height == 0)
		return (0);
	if (m_inf->full == m_inf->obstacle || m_inf->full == m_inf->empty
		|| m_inf->obstacle == m_inf->empty)
		return (0);
	line = map + ft_linelen(map) + 1;
	m_inf->width = ft_linelen(line);
	while (i < m_inf->height && line[i * (m_inf->width + 1)] < 32)
	{
		new_l_len = ft_linelen(line + ((i++) * (m_inf->width + 1)));
		if (new_l_len != m_inf->width)
			return (0);
	}
	line = map + ft_linelen(map);
	i = 0;
	while (*line == '\n' && i++ >= 0)
		line += m_inf->width + 1;
	if ((i - 1) != m_inf->height)
		return (0);
	return (ft_map_char_chk(map, m_inf));
}

int	ft_map_char_chk(char *map, t_map_info *m_inf)
{
	char	*line;

	line = map + ft_linelen(map) + 1;
	while (*line > 0)
	{
		if (!(*line == m_inf->full || *line == m_inf->empty
				|| *line == m_inf->obstacle || *line == '\n'
				|| *line == '\0'))
			return (0);
		if (*line == '\0')
			break ;
		line++;
	}
	return (1);
}
