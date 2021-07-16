/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_s_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 23:00:29 by tlufulua          #+#    #+#             */
/*   Updated: 2021/07/16 01:26:28 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PTFtester_bonus.h"

void	test_s_bonus()
{
	char	*str;
	int		x;
	
	str = "Hello world!";
	x = 1;

	printf("\x1b[34mBonus\x1b[0m\n");
	//1
	check(x++, printf("original: %1s %1s ", "123", "4567"), \
			ft_printf_bonus("ftprintf: %1s %1s \n", "123", "4567"));
	//2
	check(x++, printf("original: %4s %4s ", "123", "4567"), \
			ft_printf_bonus("ftprintf: %4s %4s \n", "123", "4567"));
	//3
	check(x++, printf("original: %-4s %4s ", "123", "4567"), \
			ft_printf_bonus("ftprintf: %-4s %4s \n", "123", "4567"));
	//4
	check(x++, printf("original: %4s %-4s ", "123", "4567"), \
			ft_printf_bonus("ftprintf: %4s %-4s \n", "123", "4567"));
	//5
	check(x++, printf("original: %-4s %-4s ", "123", "4567"), \
			ft_printf_bonus("ftprintf: %-4s %-4s \n", "123", "4567"));
	//6
	check(x++, printf("original: %*s %*s ", 1, "123", 10, "4567"), \
			ft_printf_bonus("ftprintf: %*s %*s \n", 1, "123", 10, "4567"));
	//7
	check(x++, printf("original: %*.s %.1s ", 10, "123", "4567"), \
			ft_printf_bonus("ftprintf: %*.s %.1s \n", 10, "123", "4567"));
	//8
	check(x++, printf("original: %*.3s %.3s ", 10, "123", "4567"), \
			ft_printf_bonus("ftprintf: %*.3s %.3s \n", 10, "123", "4567"));
	//9
	check(x++, printf("original: %*.6s %.6s ", 10, "123", "4567"), \
			ft_printf_bonus("ftprintf: %*.6s %.6s \n", 10, "123", "4567"));
	//10
	check(x++, printf("original: %*.6s %.6s ", 10, "", "4567"), \
			ft_printf_bonus("ftprintf: %*.6s %.6s \n", 10, "", "4567"));
	//11
	check(x++, printf("original: %.s ", ""), \
			ft_printf_bonus("ftprintf: %.s \n", ""));
	//12
	check(x++, printf("original: %.0s ", ""), \
			ft_printf_bonus("ftprintf: %.0s \n", ""));
/*	//13
	check(x++, printf("original: %s ", NULL), \
			ft_printf_bonus("ftprintf: %s \n", NULL));
	//14
	check(x++, printf("original: %-3.s ", NULL), \
			ft_printf_bonus("ftprintf: %-3.s \n", NULL));
	//15
	check(x++, printf("original: %.*s ", 3, NULL), \
			ft_printf_bonus("ftprintf: %.*s \n", 3, NULL));
*/}
