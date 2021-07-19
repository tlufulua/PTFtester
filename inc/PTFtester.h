/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PTFtester.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 19:13:07 by tlufulua          #+#    #+#             */
/*   Updated: 2021/07/16 21:40:50 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

int		ft_printf(const char *format, ...);

void	test_c();
void	test_s();
void	test_p();
void	test_d();
void	test_i();
void	test_u();
void	test_hex();
void	test_X();
void	test_percent();

void	check(int x, int org, int ft);
