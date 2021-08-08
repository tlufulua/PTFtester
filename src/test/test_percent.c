/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_percent.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 19:07:20 by tlufulua          #+#    #+#             */
/*   Updated: 2021/08/07 16:27:05 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PTFtester.h"

void	test_percent()
{
	int	x;
	
	x = 1;
	printf("\x1b[34mMandatory\x1b[0m\n");
	//1
	check(x++, printf("original: %% Hello"), \
			ft_printf("ftprintf: %% Hello\n"));
	//2
	check(x++, printf("original: %% "), \
			ft_printf("ftprintf: %% \n"));
	//3
	check(x++, printf("original: %%%% "), \
			ft_printf("ftprintf: %%%% \n"));
	//4
	check(x++, printf("original: %% %% %% "), \
			ft_printf("ftprintf: %% %% %% \n"));
	//5
	check(x++, printf("original: %%  %%  %% "), \
			ft_printf("ftprintf: %%  %%  %% \n"));
	//6
	check(x++, printf("original: %%"), \
			ft_printf("ftprintf: %%\n"));
	//7
	check(x++, printf("original: %% %%"), \
			ft_printf("ftprintf: %% %%\n"));
}
