/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexax_len.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:46:05 by antoine           #+#    #+#             */
/*   Updated: 2022/04/06 18:59:12 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_hexax_len(unsigned int n, char c)
{
	long		nb;
	static int	count;
	char		*base;
	
	if (c == 'x')
		base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	nb = n;
	if (nb > 15)
		ft_putnbr_hexax_len(nb / 16, c);
	count += ft_putchar_len(base[nb % 16]);
	return (count);
}
