/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_i_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 00:07:13 by tlufulua          #+#    #+#             */
/*   Updated: 2021/08/09 19:49:08 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PTFtester.h"

void	test_i_bonus()
{
	int	x;

	x = 1;
	//1
	printf("\x1b[34mBonus\x1b[0m\n");
	check(x++, printf("original: % 05i", 42), \
			ft_printf("ftprintf: % 05i\n", 42));
	//2
	check(x++, printf("original: %5i", -42), \
			ft_printf("ftprintf: %5i\n", -42));
	//3
	check(x++, printf("original: %-5i", -42), \
			ft_printf("ftprintf: %-5i\n", -42));
	//4
	check(x++, printf("original: %--5i", -42), \
			ft_printf("ftprintf: %--5i\n", -42));
	//5
	check(x++, printf("original: %0*i", 5, -42), \
			ft_printf("ftprintf: %0*i\n", 5, -42));
	//6
	check(x++, printf("original: %5.7i", 42), \
			ft_printf("ftprintf: %5.7i\n", 42));
	//7
	check(x++, printf("original: %5.7i", 42), \
			ft_printf("ftprintf: %5.7i\n", 42));
	//8
	check(x++, printf("original: %5.7i%i", 42, 210), \
			ft_printf("ftprintf: %5.7i%i\n", 42, 210));
	//9
	check(x++, printf("original: %5.7i%-i", 42, 210), \
			ft_printf("ftprintf: %5.7i%-i\n", 42, 210));
	//10
	check(x++, printf("original: %15i", INT_MAX), \
			ft_printf("ftprintf: %15i\n", INT_MAX));
	//11
	check(x++, printf("original: %23.21i", 20), \
			ft_printf("ftprintf: %23.21i\n", 20));
	//12
	check(x++, printf("original: %+15i", INT_MAX), \
			ft_printf("ftprintf: %+15i\n", INT_MAX));
	//13
	check(x++, printf("original: %+15i", -56), \
			ft_printf("ftprintf: %+15i\n", -56));
	//14
	check(x++, printf("original: %+015i", 56), \
			ft_printf("ftprintf: %+015i\n", 56));
	//15
	check(x++, printf("original: %.0i", 0), \
			ft_printf("ftprintf: %.0i\n", 0));
	//16
	check(x++, printf("original: %04i", -42), \
			ft_printf("ftprintf: %04i\n", -42));
}
