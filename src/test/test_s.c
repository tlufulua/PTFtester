/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 23:00:29 by tlufulua          #+#    #+#             */
/*   Updated: 2021/07/12 18:54:40 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/PTFtester.h"

void	test_s()
{
	char	*str;
	int		x;
	
	str = "Hello world!";
	x = 1;

	printf("\x1b[34mMandatory\x1b[0m\n");
	//1
	check(x++, printf("original: %s", str), \
			ft_printf("ftprintf: %s\n", str));
	//2
	check(x++, printf("original: %s", ""), \
			ft_printf("ftprintf: %s\n", ""));
	//3
	check(x++, printf("original: %s", "0"), \
			ft_printf("ftprintf: %s\n", "0"));
	//4
	check(x++, printf("original: %s %s", "", ""), \
			ft_printf("ftprintf: %s %s\n", "", ""));
	//5
	check(x++, printf("original: %s %s ", "", ""), \
			ft_printf("ftprintf: %s %s \n", "", ""));
	//6
	check(x++, printf("original: %s %s", "0", "1"), \
			ft_printf("ftprintf: %s %s\n", "0", "1"));
	//7
	check(x++, printf("original: %s %s ", "0", "1"), \
			ft_printf("ftprintf: %s %s \n", "0", "1"));
}
