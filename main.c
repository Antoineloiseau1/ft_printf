/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:00:44 by anloisea          #+#    #+#             */
/*   Updated: 2022/04/06 19:30:12 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#define INT_MAX 2147483647
#define INT_MIN -2147483647
#define LONG_MAX 2147483647
#define LONG_MIN -2147483647
#define ULONG_MAX 4294967295


int	main(void)
{
	int	a = ft_printf(" %i %i %i %i %i %i %i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %i %i %i %i %i %i %i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	//printf("ma fonction renvoie %d\nla fonction normale renvoie %d\n",a ,b);
	return (0);
}
