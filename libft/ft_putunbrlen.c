/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbrlen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 16:54:38 by antoine           #+#    #+#             */
/*   Updated: 2022/04/05 17:12:52 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunbrlen(unsigned int n)
{
    static int i;

	if (n > 9)
    {
		ft_putunbrlen(n / 10);
        i++;
    }
	ft_putchar (n % 10 + '0');
    return (i);
}