/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:56:33 by alejandg          #+#    #+#             */
/*   Updated: 2022/11/02 10:20:20 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_select(va_list args, const char format, int *len)
{
	if (format == 'c')
		ft_putchar(va_arg(args, int), len);
	if (format == 's')
		ft_putstr(va_arg(args, char *), len);
	if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(args, long int), len);
	if (format == '%')
		ft_putchar('%', len);
	if (format == 'u')
		ft_putunsigned(va_arg(args, unsigned int), len);
	if (format == 'x')
		ft_puthex(va_arg(args, unsigned int), "0123456789abcdef", len);
	if (format == 'p')
	{
		ft_putstr("0x", len);
		ft_puthex(va_arg(args, unsigned long long), "0123456789abcdef", len);
	}
	if (format == 'X')
		ft_puthex(va_arg(args, unsigned int), "0123456789ABCDEF", len);
}

int	ft_printf(const char *pepito, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start (args, pepito);
	while (pepito[i])
	{
		if (pepito[i] == '%')
		{
			ft_select(args, pepito[i + 1], &len);
			i++;
		}
		else
		{
			ft_putchar(pepito[i], &len);
		}
	i++;
	}
	va_end(args);
	return (len);
}

// int	main(int nb, char **str)
// {
// 	ft_printf("%i", ft_printf("%u", "-10"));
// 	printf("\n");
// 	printf("%i", printf("%u", "-10"));
// 	printf("esto furula");
// }
