/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:46:05 by antoine           #+#    #+#             */
/*   Updated: 2022/04/07 18:47:26 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthexa_len(unsigned int n, char c)
{
	static int	count;
	char		*base;
	
	if (c == 'x')
		base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	if (n > 15)
		ft_puthexa_len(n / 16, c);
	count += ft_putchar_len(base[n % 16]);
	return (count);
}
