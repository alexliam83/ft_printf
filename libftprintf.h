/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:48:07 by alejandg          #+#    #+#             */
/*   Updated: 2022/10/27 13:05:20 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(char const	*pepito, ...);
void		ft_putchar(int c, int *len);
void	ft_putstr(char *str, int *len);
void	ft_putnbr(int nb, int *len);

#endif