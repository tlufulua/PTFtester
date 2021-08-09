/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_X_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 08:40:05 by tlufulua          #+#    #+#             */
/*   Updated: 2021/08/09 19:44:20 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PTFtester.h"

void	test_X_bonus()
{
	int	x;

	x = 1;
	printf("\x1b[34mBonus\x1b[0m\n");
	//1
	check(x++, printf("original: %.X", -456), 
			ft_printf("ftprintf: %.X\n", -456));
	//2
	check(x++, printf("original: %#X", 42), 
			ft_printf("ftprintf: %#X\n", 42));
	//3
	check(x++, printf("original: %-X", 0), 
			ft_printf("ftprintf: %-X\n", 0));
	//4
	check(x++, printf("original: %-.2X", 0), 
			ft_printf("ftprintf: %-.2X\n", 0));
	//5
	check(x++, printf("original: %3.4X", 42), 
			ft_printf("ftprintf: %3.4X\n", 42));
	//6
	check(x++, printf("original: %-3.4X", 42), 
			ft_printf("ftprintf: %-3.4X\n", 42));
	//7
	check(x++, printf("original: %3.4X", UINT_MAX), 
			ft_printf("ftprintf: %3.4X\n", UINT_MAX));
	//8
	check(x++, printf("original: %-3.4X", UINT_MAX), 
			ft_printf("ftprintf: %-3.4X\n", UINT_MAX));
	//9
	check(x++, printf("original: %.0X", 0), 
			ft_printf("ftprintf: %.0X\n", 0));
}
