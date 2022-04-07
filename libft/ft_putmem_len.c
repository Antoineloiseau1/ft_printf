/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:43:29 by anloisea          #+#    #+#             */
/*   Updated: 2022/04/07 18:56:40 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_putmem_len(unsigned long int mem)
{
    char            *hexa;
    static int      count;

    hexa = "0123456789abcdef";
    if (mem > 15)
        ft_putmem_len(mem / 16);
    count += ft_putchar_len(hexa[mem % 16]);
    return (count);
}