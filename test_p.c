/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 21:19:01 by tlufulua          #+#    #+#             */
/*   Updated: 2021/07/11 02:44:48 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PTFtester.h"

void	test_p()
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
		ft_printf("ftprintf: %p\n", str));
}
