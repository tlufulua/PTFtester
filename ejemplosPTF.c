/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:56:26 by tlufulua          #+#    #+#             */
/*   Updated: 2021/08/02 19:38:24 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	main()
{
	printf("(%i)\n", printf("org: %.0X\n", 0));
	printf("(%i)\n", ft_printf_bonus("mio: %.0X\n", 0));
	return (0);
}
