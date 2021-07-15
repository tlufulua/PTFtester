/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_p_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 21:19:01 by tlufulua          #+#    #+#             */
/*   Updated: 2021/07/14 21:34:36 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PTFtester_bonus.h"

void	test_p_b()
{
	char	*str;
	int		n;
	int		x;

	n = 101;
	str = "Hello";
	x = 1;
	printf("\x1b[34mMandatory\x1b[0m\n");
	//1
	check(x++, printf("original: %p", str), \
		ft_printf_bonus("ftprintf: %p\n", str));
	//2
	check(x++, printf("original: %p", &str), \
		ft_printf_bonus("ftprintf: %p\n", &str));
	//3
	check(x++, printf("original: %p%p", &str, str), \
		ft_printf_bonus("ftprintf: %p%p\n", &str, str));
	//4
	check(x++, printf("original: %p-0", &str), \
		ft_printf_bonus("ftprintf: %p-0\n", &str));
}
