/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:01:36 by anloisea          #+#    #+#             */
/*   Updated: 2022/04/05 17:31:02 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_len(int n)
{
    static  int count;
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
		count++;
	}
	if (nb > 9)
    {
		count++;
		ft_putnbr_len(nb / 10);
    }
	ft_putchar(nb % 10 + '0');
    return (count);
}