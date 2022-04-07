/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cases.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:17:21 by anloisea          #+#    #+#             */
/*   Updated: 2022/04/07 18:59:59 by anloisea         ###   ########.fr       */
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
		len = ft_putstr_len(va_arg(args, char *));
	if (c == 'p')
	{
		len += ft_putstr_len("0x");
		len += ft_putmem_len(va_arg(args, unsigned long int));
	}
	if (c == 'd' || c == 'i')
		len = ft_putnbr_len(va_arg(args, int)) + 1;
	if (c == 'u')
		len = ft_putunbr_len(va_arg(args, unsigned int)) + 1;
	if (c == 'x' || c == 'X')
		len = ft_puthexa_len(va_arg(args, unsigned int), c);
	if (c == '%')
		len = ft_putchar_len('%');
	return (len);
}
