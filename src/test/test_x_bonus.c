/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_X_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 22:03:33 by tlufulua          #+#    #+#             */
/*   Updated: 2021/07/14 21:38:29 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PTFtester_bonus.h"

void	test_X_bonus()
{
	int	x;

	x = 1;
	printf("\x1b[34mBonus\x1b[0m\n");
	//1
	check(x++, printf("original: %.X", -456), 
			ft_printf_bonus("ftprintf: %.X\n", -456));
	//2
	check(x++, printf("original: %#X", 42), 
			ft_printf_bonus("ftprintf: %#X\n", 42));
	//3
	check(x++, printf("original: %-X", 0), 
			ft_printf_bonus("ftprintf: %-X\n", 0));
	//4
	check(x++, printf("original: %-.2X", 0), 
			ft_printf_bonus("ftprintf: %-.2X\n", 0));
	//5
	check(x++, printf("original: %*.*X", 3, 4, 42), 
			ft_printf_bonus("ftprintf: %*.*X\n", 3, 4, 42));
	//6
	check(x++, printf("original: %-*.*X", 3, 4, 42), 
			ft_printf_bonus("ftprintf: %-*.*X\n", 3, 4, 42));
	//7
	check(x++, printf("original: %3.4X", 42), 
			ft_printf_bonus("ftprintf: %3.4X\n", 42));
	//8
	check(x++, printf("original: %-3.4X", 42), 
			ft_printf_bonus("ftprintf: %-3.4X\n", 42));
	//9
	check(x++, printf("original: %3.4X", UINT_MAX), 
			ft_printf_bonus("ftprintf: %3.4X\n", UINT_MAX));
	//10
	check(x++, printf("original: %-3.4X", UINT_MAX), 
			ft_printf_bonus("ftprintf: %-3.4X\n", UINT_MAX));
}
