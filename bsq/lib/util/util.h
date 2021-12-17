/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjerddee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 01:45:24 by pjerddee          #+#    #+#             */
/*   Updated: 2021/12/16 19:11:50 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTIL_H
# define UTIL_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

# define RED   "\x1B[31m"
# define GRN   "\x1B[32m"
# define YEL   "\x1B[33m"
# define BLU   "\x1B[34m"
# define MAG   "\x1B[35m"
# define CYN   "\x1B[36m"
# define WHT   "\x1B[37m"
# define RESET "\x1B[0m"

int		ft_is_number(char c);
int		ft_is_printable(char c);
int		ft_linelen(char *str);
int		ft_my_atoi(char *str);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putstr_err(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
char	*ft_strncpy(char *dest, char *src, unsigned int n);

#endif 
