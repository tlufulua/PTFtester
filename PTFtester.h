/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PTFtester.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 21:41:30 by tlufulua          #+#    #+#             */
/*   Updated: 2021/07/11 03:05:10 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../ft_printf.h"
#include <string.h>
#include <stdlib.h>

void	test_s();
void	test_p();
void	test_d();
void	test_percent();

void	test_s_bonus();
void	test_p_bonus();
void	test_d_bonus();
void	test_percent_bonus();

void	check(int x, int org, int ft);
