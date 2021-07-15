/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_hex_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 08:40:05 by tlufulua          #+#    #+#             */
/*   Updated: 2021/07/14 21:34:10 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PTFtester_bonus.h"

void	test_hex_b()
{
	int	x;

	x = 1;
	printf("\x1b[34mMandatory\x1b[0m\n");
	//1
	check(x++, printf("original: %x", -456), 
			ft_printf_bonus("ftprintf: %x\n", -456));
	//2
	check(x++, printf("original: %x%x", 456, 340), 
			ft_printf_bonus("ftprintf: %x%x\n", 456, 340));
	//3
	check(x++, printf("original: %x%x ", 456, 340), 
			ft_printf_bonus("ftprintf: %x%x \n", 456, 340));
	//4
	check(x++, printf("original: %x %x", INT_MAX, INT_MIN), 
			ft_printf_bonus("ftprintf: %x %x\n", INT_MAX, INT_MIN));
	//5
	check(x++, printf("original: %x", 0), 
			ft_printf_bonus("ftprintf: %x\n", 0));
	//6
	check(x++, printf("original: %x", -0), 
			ft_printf_bonus("ftprintf: %x\n", -0));
}
