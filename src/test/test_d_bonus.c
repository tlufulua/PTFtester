/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_d_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 00:07:13 by tlufulua          #+#    #+#             */
/*   Updated: 2021/08/09 19:47:08 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PTFtester.h"

void	test_d_bonus()
{
	int	x;

	x = 1;
	printf("\x1b[34mBonus\x1b[0m\n");
	//1
	check(x++, printf("original: % 05d", 42), \
			ft_printf("ftprintf: % 05d\n", 42));
	//2
	check(x++, printf("original: %5d", -42), \
			ft_printf("ftprintf: %5d\n", -42));
	//3
	check(x++, printf("original: %-5d", -42), \
			ft_printf("ftprintf: %-5d\n", -42));
	//4
	check(x++, printf("original: %5d", -42), \
			ft_printf("ftprintf: %5d\n", -42));
	//5
	check(x++, printf("original: %-5d", -42), \
			ft_printf("ftprintf: %-5d\n", -42));
	//6
	check(x++, printf("original: %--5d", -42), \
			ft_printf("ftprintf: %--5d\n", -42));
	//7
	check(x++, printf("original: %05d", -42), \
			ft_printf("ftprintf: %05d\n", -42));
	//8
	check(x++, printf("original: %5.7d", 42), \
			ft_printf("ftprintf: %5.7d\n", 42));
	//9
	check(x++, printf("original: %5.7d%d", 42, 210), \
			ft_printf("ftprintf: %5.7d%d\n", 42, 210));
	//10
	check(x++, printf("original: %5.7d%-d", 42, 210), \
			ft_printf("ftprintf: %5.7d%-d\n", 42, 210));
	//11
	check(x++, printf("original: %15d", INT_MAX), \
			ft_printf("ftprintf: %15d\n", INT_MAX));
	//12
	check(x++, printf("original: %+15d", INT_MAX), \
			ft_printf("ftprintf: %+15d\n", INT_MAX));
	//13
	check(x++, printf("original: %+15d", -56), \
			ft_printf("ftprintf: %+15d\n", -56));
	//14
	check(x++, printf("original: %+015d", 56), \
			ft_printf("ftprintf: %+015d\n", 56));
	//15
	check(x++, printf("original: %.0d", 0), \
			ft_printf("ftprintf: %.0d\n", 0));
	//16
	check(x++, printf("original: %-d", INT_MIN), \
			ft_printf("ftprintf: %-d\n", INT_MIN));
	//17
	check(x++, printf("original: %04d", -42), \
			ft_printf("ftprintf: %04d\n", -42));
}
