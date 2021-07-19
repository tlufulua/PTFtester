/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 08:40:05 by tlufulua          #+#    #+#             */
/*   Updated: 2021/07/16 20:50:10 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PTFtester.h"

void	test_X()
{
	int	x;

	x = 1;
	printf("\x1b[34mMandatory\x1b[0m\n");
	//1
	check(x++, printf("original: %X", -456), 
			ft_printf("ftprintf: %X\n", -456));
	//2
	check(x++, printf("original: %X%X", 456, 340), 
			ft_printf("ftprintf: %X%X\n", 456, 340));
	//3
	check(x++, printf("original: %X%X ", 456, 340), 
			ft_printf("ftprintf: %X%X \n", 456, 340));
	//4
	check(x++, printf("original: %X %X", INT_MAX, INT_MIN), 
			ft_printf("ftprintf: %X %X\n", INT_MAX, INT_MIN));
	//5
	check(x++, printf("original: %X", 0), 
			ft_printf("ftprintf: %X\n", 0));
	//6
	check(x++, printf("original: %X", -0), 
			ft_printf("ftprintf: %X\n", -0));
}
