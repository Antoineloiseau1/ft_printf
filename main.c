/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:00:44 by anloisea          #+#    #+#             */
/*   Updated: 2022/04/07 19:00:10 by anloisea         ###   ########.fr       */
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
	int*ptr;
	int c;

	ptr = &c;
	int	a = ft_printf("%p\n", ptr);
	int b =printf("%p\n", ptr);
	printf("ma fonction renvoie %d\nla fonction normale renvoie %d\n",a ,b);
	c = 1;
	return (0);
}
