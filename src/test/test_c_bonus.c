/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_c_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 04:52:15 by tlufulua          #+#    #+#             */
/*   Updated: 2021/07/14 21:38:18 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PTFtester_bonus.h"

void	test_c_bonus()
{
	int	x;

	x = 1;
	printf("\x1b[34mBonus\x1b[0m\n");
	//1
	check(x++, printf("original: %10c", 'H'), 
			ft_printf_bonus("ftprintf: %10c\n", 'H'));
	//2
	check(x++, printf("original: %-10c", 'H'), 
			ft_printf_bonus("ftprintf: %-10c\n", 'H'));
	//3
	check(x++, printf("original: %*c", 0, 'H'), 
			ft_printf_bonus("ftprintf: %*c\n", 0, 'H'));
	//4
	check(x++, printf("original: %*c", 4, 'H'), 
			ft_printf_bonus("ftprintf: %*c\n", 4, 'H'));
	//5
	check(x++, printf("original: %*c", -4, 'H'), 
			ft_printf_bonus("ftprintf: %*c\n", -4, 'H'));
	//6
	check(x++, printf("original: -%*c%-*c", 4, 'H', 2, 'o'), 
			ft_printf_bonus("ftprintf: -%*c%-*c\n", 4, 'H', 2, 'o'));
	//7
	check(x++, printf("original: %.c", 'H'), 
			ft_printf_bonus("ftprintf: %.c\n", 'H'));
}
