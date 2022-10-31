/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:27:30 by alejandg          #+#    #+#             */
/*   Updated: 2022/10/31 13:07:28 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long long nb, char *base, int *len)
{
	if (nb >= 16)
	{
		ft_puthex(nb / 16, base, len);
		ft_puthex(nb % 16, base, len);
	}
	else
	{
		ft_putchar(base[nb], len);
	}
}
