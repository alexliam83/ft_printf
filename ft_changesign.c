/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_changesign.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:42:28 by alejandg          #+#    #+#             */
/*   Updated: 2022/10/31 12:54:21 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_changesign(unsigned int nb, int *len)
{
	if (nb >= 10)
	{
		ft_changesign(nb / 10, len);
		ft_changesign(nb % 10, len);
	}
	else
	{
		ft_putchar(nb + 48, len);
	}
}
