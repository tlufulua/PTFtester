/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_percent_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 19:07:20 by tlufulua          #+#    #+#             */
/*   Updated: 2021/07/14 21:34:48 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PTFtester_bonus.h"

void	test_percent_b()
{
	int	x;
	
	x = 1;
	printf("\x1b[34mMandatory\x1b[0m\n");
	//1
	check(x++, printf("original: %% Hello"), \
			ft_printf_bonus("ftprintf: %% Hello\n"));
	//2
	check(x++, printf("original: %% "), \
			ft_printf_bonus("ftprintf: %% \n"));
	//3
	check(x++, printf("original: %%%% "), \
			ft_printf_bonus("ftprintf: %%%% \n"));
	//4
	check(x++, printf("original: %% %% %% "), \
			ft_printf_bonus("ftprintf: %% %% %% \n"));
	//5
	check(x++, printf("original: %%  %%  %% "), \
			ft_printf_bonus("ftprintf: %%  %%  %% \n"));
	//6
	check(x++, printf("original: %%"), \
			ft_printf_bonus("ftprintf: %%\n"));
	//7
	check(x++, printf("original: %% %%"), \
			ft_printf_bonus("ftprintf: %% %%\n"));
}
