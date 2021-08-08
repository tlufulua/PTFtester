/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_p_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 21:19:01 by tlufulua          #+#    #+#             */
/*   Updated: 2021/08/07 16:51:09 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PTFtester.h"

void	test_p_bonus()
{
	char	*str;
	int		n;
	int		x;

	n = 101;
	str = "Hello";
	x = 1;
	printf("\x1b[34mBonus\x1b[0m\n");
	//1
	check(x++, printf("original: %22p", str), \
			ft_printf("ftprintf: %22p\n", str));
	//2
	check(x++, printf("original: %-22p", str), \
			ft_printf("ftprintf: %-22p\n", str));
	//3
	check(x++, printf("original: %*p", -10, &n), \
			ft_printf("ftprintf: %*p\n", -10, &n));
	//4
	check(x++, printf("original: %-*p", -10, &n), \
			ft_printf("ftprintf: %-*p\n", -10, &n));
}
