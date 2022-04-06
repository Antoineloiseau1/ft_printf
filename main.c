/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoine <antoine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:00:44 by anloisea          #+#    #+#             */
/*   Updated: 2022/04/06 12:04:11 by antoine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	main(void)
{
	int a = ft_printf("test de ma fonction printf, 42 = %x\n", -42);
	int b = printf("test de la fonction printf, 42 = %x\n", -42);
	printf("ma fonction renvoie %d\nla fonction normale renvoie %d\n",a ,b);
	return (0);
}
