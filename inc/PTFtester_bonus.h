/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PTFtester_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 19:13:07 by tlufulua          #+#    #+#             */
/*   Updated: 2021/07/14 22:52:17 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

int		ft_printf_bonus(const char *format, ...);

void	test_c_b();
void	test_s_b();
void	test_p_b();
void	test_d_b();
void	test_i_b();
void	test_u_b();
void	test_hex_b();
void	test_X_b();
void	test_percent_b();

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
