/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 00:07:13 by tlufulua          #+#    #+#             */
/*   Updated: 2021/07/12 18:52:49 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/PTFtester.h"

void	test_d()
{
	int	x;

	x = 1;
	//1
	printf("\x1b[34mMandatory\x1b[0m\n");
	check(x++, printf("original: %d", 42), \
			ft_printf("ftprintf: %d\n", 42));
	//2
	check(x++, printf("original: %d%d", 42, 210), \
			ft_printf("ftprintf: %d%d\n", 42, 210));
}
