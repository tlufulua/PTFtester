/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 00:07:13 by tlufulua          #+#    #+#             */
/*   Updated: 2021/08/07 16:26:10 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PTFtester.h"

void	test_d()
{
	int	x;

	x = 1;
	//1
	printf("\x1b[34mMandatory\x1b[0m\n");
	check(x++, printf("original: %d", 42), \
			ft_printf("ftprintf: %d\n", 42));
	//2
	check(x++, printf("original: %d%i", 42, 210), \
			ft_printf("ftprintf: %d%i\n", 42, 210));
	//3
	check(x++, printf("original: %d%i ", -42, 210), \
			ft_printf("ftprintf: %d%i \n", -42, 210));
	//4
	check(x++, printf("original: %d %i ", INT_MIN, INT_MAX), \
			ft_printf("ftprintf: %d %i \n", INT_MIN, INT_MAX));
}
