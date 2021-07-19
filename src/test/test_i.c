/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_i.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 00:07:13 by tlufulua          #+#    #+#             */
/*   Updated: 2021/07/16 20:50:57 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PTFtester.h"

void	test_i()
{
	int	x;

	x = 1;
	//1
	printf("\x1b[34mMandatory\x1b[0m\n");
	check(x++, printf("original: %i", 42), \
			ft_printf("ftprintf: %i\n", 42));
	//2
	check(x++, printf("original: %i%i", 42, 210), \
			ft_printf("ftprintf: %i%i\n", 42, 210));
	//3
	check(x++, printf("original: %i%i ", 42, 210), \
			ft_printf("ftprintf: %i%i \n", 42, 210));
}
