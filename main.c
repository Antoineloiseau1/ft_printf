/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anloisea <anloisea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:00:44 by anloisea          #+#    #+#             */
/*   Updated: 2022/04/08 19:04:25 by anloisea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	a;
	int b;
	char	input;

	puts("Choisissez un test: [c/s/u/p]");
	scanf("%c", &input);

	switch (input)
	{
	case 'c':
	{	
		puts("********************");
		ft_printf("||   test de c:   ||\n");
		puts("********************");
		for(int i = -255; i < 255; i++)
		{
			a = ft_printf("Yours i == %d, c == %c\n", i, i);
			b = printf("Their i == %d, c == %c\n", i, i);
			if (a == b)
				ft_printf("\t\t\tdiff:OK\n\n");
			else
			{
				ft_printf("\ndiff:KO\n\n");
				return (0);
			}
		}
		break;
	}
	case 's':
	{
		char *str[] = {"hello", "",  NULL, "qwertyuiopasdfghjklzxcvbnQWERTYUAFGHJSVBCNhbwnjkn789146541871@#$%^&*()#)(*"};
		puts("********************");
		ft_printf("||   test de s:   ||\n");
		puts("********************");
		for(int i = 0; i < 4; i++)
		{
			a = ft_printf("Yours s == %s%s\n", str[i], str[i]);
			b = printf("Their s == %s%s\n", str[i], str[i]);
			if (a == b)
				ft_printf("\ndiff:OK\n\n");
			else
				ft_printf("\ndiff:KO\n\n");
		}
		break;
	}

	case 'u':
	{
		puts("********************");
		ft_printf("||   test de u:   ||\n");
		puts("********************");
		a = ft_printf("Yours %u\t%u\t UINT_MAX = %u\t%u\t%u\n", 0, -4294967295, UINT_MAX, 65536, -1);
		b = printf("Their %u\t%u\t UINT_MAX = %u\t%u\t%u\n", 0, -4294967295, UINT_MAX, 65536, -1);
		if (a == b)
			ft_printf("\ndiff:OK\n\n");
		else
			ft_printf("\ndiff:KO\n\n");
		break;
	}
	
	case 'p':
	{	
		puts("********************");
		ft_printf("||   test de p:   ||\n");
		puts("********************");
		int *ptr;
		a = ft_printf("Yours LLONG_MIN = %p\tNULL = %p\tULONG_MAX = %p\tULLONG_MAX = %p\tptr = %p\n",  LLONG_MIN, NULL, ULONG_MAX, ULLONG_MAX, ptr);
		b = printf("Their LLONG_MIN = %p\tNULL = %p\tULONG_MAX = %p\tULLONG_MAX = %p\tptr = %p\n",  LLONG_MIN, NULL, ULONG_MAX, ULLONG_MAX, ptr);
		if (a == b)
			ft_printf("\ndiff:OK\n\n");
		else
			ft_printf("\ndiff:KO\n\n");
		break;
	}
	default:
		return (0);
	}
	return (0);
}
