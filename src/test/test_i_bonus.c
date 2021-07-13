/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_i_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 00:07:13 by tlufulua          #+#    #+#             */
/*   Updated: 2021/07/12 18:53:28 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/PTFtester.h"

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
	check(x++, printf("original: %*i", 5, -42), \
			ft_printf("ftprintf: %*i\n", 5, -42));
	//5
	check(x++, printf("original: %*i", -5, -42), \
			ft_printf("ftprintf: %*i\n", -5, -42));
	//6
	check(x++, printf("original: %-*i", -5, -42), \
			ft_printf("ftprintf: %-*i\n", -5, -42));
	//7
	check(x++, printf("original: %0*i", 5, -42), \
			ft_printf("ftprintf: %0*i\n", 5, -42));
	//8
	check(x++, printf("original: %5.7i", 42), \
			ft_printf("ftprintf: %5.7i\n", 42));
	//9
	check(x++, printf("original: %*.7i", 5, 42), \
			ft_printf("ftprintf: %*.7i\n", 5, 42));
	//10
	check(x++, printf("original: %*.7i%i", 5, 42, 210), \
			ft_printf("ftprintf: %*.7i%i\n", 5, 42, 210));
	//11
	check(x++, printf("original: %*.7i%-i", 5, 42, 210), \
			ft_printf("ftprintf: %*.7i%-i\n", 5, 42, 210));
	//12
	check(x++, printf("original: %15i", INT_MAX), \
			ft_printf("ftprintf: %15i\n", INT_MAX));
	//13
	check(x++, printf("original: %*.*i", 23, 21, 20), \
			ft_printf("ftprintf: %*.*i\n", 23, 21, 20));
}
