/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:10:27 by alejandg          #+#    #+#             */
/*   Updated: 2022/10/31 11:56:14 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *len)

{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr("(null)", len);
		return ;
	}
	while (str[i] != '\0')
	{	
		ft_putchar(str[i], len);
		i++;
	}
}
