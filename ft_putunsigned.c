/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:42:28 by alejandg          #+#    #+#             */
/*   Updated: 2022/11/02 10:20:44 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned int nb, int *len)
{
	if (nb >= 10)
	{
		ft_putunsigned(nb / 10, len);
		ft_putunsigned(nb % 10, len);
	}
	else
	{
		ft_putchar(nb + 48, len);
	}
}
