/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PTFtester.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 19:13:07 by tlufulua          #+#    #+#             */
/*   Updated: 2021/08/07 16:18:18 by tlufulua         ###   ########.fr       */
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

void	test_c_bonus();
void	test_s_bonus();
void	test_p_bonus();
void	test_d_bonus();
void	test_i_bonus();
void	test_u_bonus();
void	test_hex_bonus();
void	test_X_bonus();
void	test_percent_bonus();

void	check(int x, int org, int ft);
