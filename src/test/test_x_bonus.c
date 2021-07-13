/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_x_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 08:40:05 by tlufulua          #+#    #+#             */
/*   Updated: 2021/07/12 18:55:43 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/PTFtester.h"

void	test_x_bonus()
{
	int	x;

	x = 1;
	printf("\x1b[34mBonus\x1b[0m\n");
	//1
	check(x++, printf("original: %.x", -456), 
			ft_printf("ftprintf: %.x\n", -456));
	//2
	check(x++, printf("original: %#x", 42), 
			ft_printf("ftprintf: %#x\n", 42));
	//3
	check(x++, printf("original: %-x", 0), 
			ft_printf("ftprintf: %-x\n", 0));
	//4
	check(x++, printf("original: %-.2x", 0), 
			ft_printf("ftprintf: %-.2x\n", 0));
	//5
	check(x++, printf("original: %*.*x", 3, 4, 42), 
			ft_printf("ftprintf: %*.*x\n", 3, 4, 42));
	//6
	check(x++, printf("original: %-*.*x", 3, 4, 42), 
			ft_printf("ftprintf: %-*.*x\n", 3, 4, 42));
	//7
	check(x++, printf("original: %3.4x", 42), 
			ft_printf("ftprintf: %3.4x\n", 42));
	//8
	check(x++, printf("original: %-3.4x", 42), 
			ft_printf("ftprintf: %-3.4x\n", 42));
	//9
	check(x++, printf("original: %3.4x", UINT_MAX), 
			ft_printf("ftprintf: %3.4x\n", UINT_MAX));
	//10
	check(x++, printf("original: %-3.4x", UINT_MAX), 
			ft_printf("ftprintf: %-3.4x\n", UINT_MAX));
}
