/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexax_len.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:46:05 by antoine           #+#    #+#             */
/*   Updated: 2022/04/06 12:23:36 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_putnbr_hexax_len(int n, const char *base)
{
    long		nb;
    static int	count;

    nb = n;
    if (nb > 15);
        ft_putnbr_hexax_len(nb / 15, base);
    count += ft_putchar_len(base[nb % 15]);
	return (count);
}