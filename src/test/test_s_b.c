/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_s_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 23:00:29 by tlufulua          #+#    #+#             */
/*   Updated: 2021/07/22 00:43:59 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PTFtester_bonus.h"

void	test_s_b()
{
	char	*str;
	int		x;
	
	str = "Hello world!";
	x = 1;

	printf("\x1b[34mMandatory\x1b[0m\n");
	//1
	check(x++, printf("original: %s", str), \
			ft_printf_bonus("ftprintf: %s\n", str));
	//2
	check(x++, printf("original: %s", ""), \
			ft_printf_bonus("ftprintf: %s\n", ""));
	//3
	check(x++, printf("original: %s", "0"), \
			ft_printf_bonus("ftprintf: %s\n", "0"));
	//4
	check(x++, printf("original: %s %s", "", ""), \
			ft_printf_bonus("ftprintf: %s %s\n", "", ""));
	//5
	check(x++, printf("original: %s %s ", "", ""), \
			ft_printf_bonus("ftprintf: %s %s \n", "", ""));
	//6
	check(x++, printf("original: %s %s", "0", "1"), \
			ft_printf_bonus("ftprintf: %s %s\n", "0", "1"));
	//7
	check(x++, printf("original: %s %s ", "0", "1"), \
			ft_printf_bonus("ftprintf: %s %s \n", "0", "1"));
	//8
	check(x++, printf("original: %s", NULL), \
			ft_printf_bonus("ftprintf: %s\n", NULL));
}
