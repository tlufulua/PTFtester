/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_d_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 00:07:13 by tlufulua          #+#    #+#             */
/*   Updated: 2021/07/22 17:55:26 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PTFtester_bonus.h"

void	test_d_bonus()
{
	int	x;

	x = 1;
	//1
	printf("\x1b[34mBonus\x1b[0m\n");
	check(x++, printf("original: % 05d", 42), \
			ft_printf_bonus("ftprintf: % 05d\n", 42));
	//2
	check(x++, printf("original: %5d", -42), \
			ft_printf_bonus("ftprintf: %5d\n", -42));
	//3
	check(x++, printf("original: %-5d", -42), \
			ft_printf_bonus("ftprintf: %-5d\n", -42));
	//4
	check(x++, printf("original: %*d", 5, -42), \
			ft_printf_bonus("ftprintf: %*d\n", 5, -42));
	//5
	check(x++, printf("original: %*d", -5, -42), \
			ft_printf_bonus("ftprintf: %*d\n", -5, -42));
	//6
	check(x++, printf("original: %-*d", -5, -42), \
			ft_printf_bonus("ftprintf: %-*d\n", -5, -42));
	//7
	check(x++, printf("original: %0*d", 5, -42), \
			ft_printf_bonus("ftprintf: %0*d\n", 5, -42));
	//8
	check(x++, printf("original: %5.7d", 42), \
			ft_printf_bonus("ftprintf: %5.7d\n", 42));
	//9
	check(x++, printf("original: %*.7d", 5, 42), \
			ft_printf_bonus("ftprintf: %*.7d\n", 5, 42));
	//10
	check(x++, printf("original: %*.7d%d", 5, 42, 210), \
			ft_printf_bonus("ftprintf: %*.7d%d\n", 5, 42, 210));
	//11
	check(x++, printf("original: %*.7d%-d", 5, 42, 210), \
			ft_printf_bonus("ftprintf: %*.7d%-d\n", 5, 42, 210));
	//12
	check(x++, printf("original: %15d", INT_MAX), \
			ft_printf_bonus("ftprintf: %15d\n", INT_MAX));
	//13
	check(x++, printf("original: %+15d", INT_MAX), \
			ft_printf_bonus("ftprintf: %+15d\n", INT_MAX));
	//14
	check(x++, printf("original: %+15d", -56), \
			ft_printf_bonus("ftprintf: %+15d\n", -56));
	//15
	check(x++, printf("original: %+015i", 56), \
			ft_printf_bonus("ftprintf: %+015i\n", 56));
}
