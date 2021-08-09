/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_u_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 08:40:05 by tlufulua          #+#    #+#             */
/*   Updated: 2021/08/09 19:51:57 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PTFtester.h"

void	test_u_bonus()
{
	int	x;

	x = 1;
	printf("\x1b[34mBonus\x1b[0m\n");
	//1
	check(x++, printf("original: %.u", -456), 
			ft_printf("ftprintf: %.u\n", -456));
	//2
	check(x++, printf("original: %u", -0), 
			ft_printf("ftprintf: %u\n", -0));
	//3
	check(x++, printf("original: %-.2u", 0), 
			ft_printf("ftprintf: %-.2u\n", 0));
	//4
	check(x++, printf("original: %-2.2u", 0), 
			ft_printf("ftprintf: %-2.2u\n", 0));
	//5
	check(x++, printf("original: %-2.2u", 420), 
			ft_printf("ftprintf: %-2.2u\n", 420));
	//6
	check(x++, printf("original: %02.2u", 420), 
			ft_printf("ftprintf: %02.2u\n", 420));
	//7
	check(x++, printf("original: %-4.2u", 420), 
			ft_printf("ftprintf: %-4.2u\n", 420));
	//8
	check(x++, printf("original: %12.2u", UINT_MAX), 
			ft_printf("ftprintf: %12.2u\n", UINT_MAX));
	//9
	check(x++, printf("original: %-12.2u", UINT_MAX), 
			ft_printf("ftprintf: %-12.2u\n", UINT_MAX));
	//10
	check(x++, printf("original: %012.2u", UINT_MAX), 
			ft_printf("ftprintf: %012.2u\n", UINT_MAX));
	//11
	check(x++, printf("original: %0.0u", 0), 
			ft_printf("ftprintf: %0.0u\n", 0));
}
