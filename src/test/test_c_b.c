/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_c_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 04:48:32 by tlufulua          #+#    #+#             */
/*   Updated: 2021/07/22 01:08:01 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PTFtester_bonus.h"

void	test_c_b()
{
	int	x;

	x = 1;
	printf("\x1b[34mMandatory\x1b[0m\n");
	//1
	check(x++, printf("original: %c", 'H'), 
			ft_printf_bonus("ftprintf: %c\n", 'H'));
	//2
	check(x++, printf("original: 42%c", 'H'), 
			ft_printf_bonus("ftprintf: 42%c\n", 'H'));
	//3
	check(x++, printf("original: %c", 0), 
			ft_printf_bonus("ftprintf: %c\n", 0));
	//4
	check(x++, printf("original: %c", -42), 
			ft_printf_bonus("ftprintf: %c\n", -42));
	//5
	check(x++, printf("original: %c", 2), 
			ft_printf_bonus("ftprintf: %c\n", 2));
	//6
	check(x++, printf("original: %c%c", 2, 'H'), 
			ft_printf_bonus("ftprintf: %c%c\n", 2, 'H'));
	//7
	check(x++, printf("original: %c", '0' - 256), 
			ft_printf_bonus("ftprintf: %c\n", '0' - 256));
	//8
	check(x++, printf("original: %c", '0' + 256), 
			ft_printf_bonus("ftprintf: %c\n", '0' + 256));
	//9
	check(x++, printf("original: %c%c%c%c%c", 'H', 'e', 'l', 'l', 'o'), 
			ft_printf_bonus("ftprintf: %c%c%c%c%c\n", 'H', 'e', 'l', 'l', 'o'));
	//10
	check(x++, printf("original: %c %c %c ", '0', '0', '1'),
			ft_printf_bonus("ftprintf: %c %c %c \n", '0', '0', '1'));
}
