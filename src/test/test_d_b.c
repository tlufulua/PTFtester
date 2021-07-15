/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_d_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 00:07:13 by tlufulua          #+#    #+#             */
/*   Updated: 2021/07/14 21:34:00 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PTFtester_bonus.h"

void	test_d_b()
{
	int	x;

	x = 1;
	//1
	printf("\x1b[34mMandatory\x1b[0m\n");
	check(x++, printf("original: %d", 42), \
			ft_printf_bonus("ftprintf: %d\n", 42));
	//2
	check(x++, printf("original: %d%d", 42, 210), \
			ft_printf_bonus("ftprintf: %d%d\n", 42, 210));
}
