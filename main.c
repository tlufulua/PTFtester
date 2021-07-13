/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 13:57:31 by tlufulua          #+#    #+#             */
/*   Updated: 2021/07/13 07:53:07 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char	*str;

	str = "Hola Mundo";

	printf("(%i)\n", printf("1printf: %u\n", -1));
	printf("(%i)\n", ft_printf("1printf: %u\n", -1));

//	system("leaks test");

	return (0);
}
