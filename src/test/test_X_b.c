/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_X_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 22:03:00 by tlufulua          #+#    #+#             */
/*   Updated: 2021/07/14 21:30:57 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PTFtester_bonus.h"

void	test_X_b()
{
	int	x;

	x = 1;
	printf("\x1b[34mMandatory\x1b[0m\n");
	//1
	check(x++, printf("original: %X", -456), 
			ft_printf_bonus("ftprintf: %X\n", -456));
	//2
	check(x++, printf("original: %X%X", 456, 340), 
			ft_printf_bonus("ftprintf: %X%X\n", 456, 340));
	//3
	check(x++, printf("original: %X%X ", 456, 340), 
			ft_printf_bonus("ftprintf: %X%X \n", 456, 340));
	//4
	check(x++, printf("original: %X %X", INT_MAX, INT_MIN), 
			ft_printf_bonus("ftprintf: %X %X\n", INT_MAX, INT_MIN));
	//5
	check(x++, printf("original: %X", 0), 
			ft_printf_bonus("ftprintf: %X\n", 0));
	//6
	check(x++, printf("original: %X", -0), 
			ft_printf_bonus("ftprintf: %X\n", -0));
}
