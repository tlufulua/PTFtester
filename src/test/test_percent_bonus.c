/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_percent_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 19:07:20 by tlufulua          #+#    #+#             */
/*   Updated: 2021/08/07 16:52:04 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PTFtester.h"

void	test_percent_bonus()
{
	int	x;
	
	x = 1;
	printf("\x1b[34mBonus\x1b[0m\n");
	//1
	check(x++, printf("original: %-0+%"), \
			ft_printf("ftprintf: %-0+%\n"));
	//2
	check(x++, printf("original: %5%"), \
			ft_printf("ftprintf: %5%\n"));
}
