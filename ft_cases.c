/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cases.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:17:21 by anloisea          #+#    #+#             */
/*   Updated: 2022/04/06 19:02:42 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_cases(char c, va_list args)
{
	int	len;

	len = 0;
	if (c == 'c')
		len = ft_putchar_len(va_arg(args, int));
	if (c == 's')
		len = ft_putstrlen(va_arg(args, char *));
	if (c == 'p')
		va_arg(args, void *);
	if (c == 'd' || c == 'i')
		len = ft_putnbr_len(va_arg(args, int)) + 1;
	if (c == 'u')
		len = ft_putunbrlen(va_arg(args, unsigned int)) + 1;
	if (c == 'x')
		len = ft_putnbr_hexax_len(va_arg(args, unsigned int), c);
	if (c == 'X')
		len = ft_putnbr_hexax_len(va_arg(args, unsigned int), c);
	if (c == '%')
		len = ft_putchar_len('%');
	return (len);
}
