/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbrlen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 16:54:38 by antoine           #+#    #+#             */
/*   Updated: 2022/04/07 18:29:37 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunbr_len(unsigned int n)
{
    static int i;

	if (n > 9)
    {
		ft_putunbr_len(n / 10);
        i++;
    }
	ft_putchar(n % 10 + '0');
    return (i);
}