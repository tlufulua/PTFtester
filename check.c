/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 19:14:15 by tlufulua          #+#    #+#             */
/*   Updated: 2021/07/11 02:43:55 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PTFtester.h"

void	check(int x, int org, int ft)
{
	ft -= 1;
	if (org == ft)
		printf(" (%i) \x1b[32m%i. OK!\x1b[0m\n", ft, x);
	else if (org != ft)
		printf(" org: (%i), ft: (%i) \x1b[31m%i. KO\x1b[0m\n", org, ft, x);
}
