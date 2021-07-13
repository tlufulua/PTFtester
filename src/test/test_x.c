/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 08:40:05 by tlufulua          #+#    #+#             */
/*   Updated: 2021/07/12 18:55:32 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/PTFtester.h"

void	test_x()
{
	int	x;

	x = 1;
	printf("\x1b[34mMandatory\x1b[0m\n");
	//1
	check(x++, printf("original: %x", -456), 
			ft_printf("ftprintf: %x\n", -456));
	//2
	check(x++, printf("original: %x%x", 456, 340), 
			ft_printf("ftprintf: %x%x\n", 456, 340));
	//3
	check(x++, printf("original: %x%x ", 456, 340), 
			ft_printf("ftprintf: %x%x \n", 456, 340));
	//4
	check(x++, printf("original: %x %x", INT_MAX, INT_MIN), 
			ft_printf("ftprintf: %x %x\n", INT_MAX, INT_MIN));
	//5
	check(x++, printf("original: %x", 0), 
			ft_printf("ftprintf: %x\n", 0));
	//6
	check(x++, printf("original: %x", -0), 
			ft_printf("ftprintf: %x\n", -0));
}
