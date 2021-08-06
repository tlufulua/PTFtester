/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PTFtester.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 19:13:36 by tlufulua          #+#    #+#             */
/*   Updated: 2021/08/06 13:40:56 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PTFtester.h"

int	main(int argc, char	**argv)
{
	if (argc == 1 || !strcmp(argv[1], "leaks") || 
			!strcmp(argv[1], "m") || !strcmp(argv[1], "mandatory"))
	{
		printf("\x1b[33m------CHARS (%%c)------\x1b[0m\n");
		test_c();
		printf("\x1b[33m-----STRINGS (%%s)-----\x1b[0m\n");
		test_s();
		printf("\x1b[33m-----POINTERS (%%p)----\x1b[0m\n");
		test_p();
		printf("\x1b[33m-----DECIMALS (%%d)----\x1b[0m\n");
		test_d();
		printf("\x1b[33m-----INTEGERS (%%i)----\x1b[0m\n");
		test_i();
		printf("\x1b[33m----LONG INT (%%u)-----\x1b[0m\n");
		test_u();
		printf("\x1b[33m---HExADECIMAL (%%x)---\x1b[0m\n");
		test_hex();
		printf("\x1b[33m---HEXADECIMAL (%%x)---\x1b[0m\n");
		test_X();
		printf("\x1b[33m-----PERCENT (%%%%)------\x1b[0m\n");
		test_percent();
		if ((argv[1] && !strcmp(argv[1], "leaks")) || 
					(argv[2] && !strcmp(argv[2], "leaks")))
			system("leaks test");
	}
	else if (argv[1] && (!strcmp(argv[1], "a") || !strcmp(argv[1], "all") || \
		!strcmp(argv[1],"b") || !strcmp(argv[1], "bonus")))
		printf("No bonus files\n");
	else
		printf("Unknown command\n");
	return (0);
}
