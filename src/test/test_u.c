/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 08:40:05 by tlufulua          #+#    #+#             */
/*   Updated: 2021/07/16 20:51:41 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PTFtester.h"

void	test_u()
{
	int	x;

	x = 1;
	printf("\x1b[34mMandatory\x1b[0m\n");
	//1
	check(x++, printf("original: %u", -456), 
			ft_printf("ftprintf: %u\n", -456));
	//2
	check(x++, printf("original: %u%u", 456, 340), 
			ft_printf("ftprintf: %u%u\n", 456, 340));
	//3
	check(x++, printf("original: %u%u ", 456, 340), 
			ft_printf("ftprintf: %u%u \n", 456, 340));
	//4
	check(x++, printf("original: %u %u", INT_MAX, INT_MIN), 
			ft_printf("ftprintf: %u %u\n", INT_MAX, INT_MIN));
	//5
	check(x++, printf("original: %u", 0), 
			ft_printf("ftprintf: %u\n", 0));
	//6
	check(x++, printf("original: %u", -0), 
			ft_printf("ftprintf: %u\n", -0));
}
