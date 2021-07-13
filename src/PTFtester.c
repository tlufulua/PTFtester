/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 13:57:31 by tlufulua          #+#    #+#             */
/*   Updated: 2021/07/12 20:44:19 by tlufulua         ###   ########.fr       */
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
		test_x();
		printf("\x1b[33m---HEXADECIMAL (%%x)---\x1b[0m\n");
		test_X();
		printf("\x1b[33m-----PERCENT (%%%%)------\x1b[0m\n");
		test_percent();
		if ((argv[1] && !strcmp(argv[1], "leaks")) || 
					(argv[2] && !strcmp(argv[2], "leaks")))
			system("leaks test");
	}
	else if (!strcmp(argv[1], "b") || !strcmp(argv[1], "bonus"))
	{
		printf("\x1b[33m------CHARS (%%c)------\x1b[0m\n");
		test_c_bonus();
		printf("\x1b[33m-----STRINGS (%%s)-----\x1b[0m\n");
		test_s_bonus();
		printf("\x1b[33m-----POINTERS (%%p)----\x1b[0m\n");
		test_p_bonus();
		printf("\x1b[33m-----DECIMALS (%%d)----\x1b[0m\n");
		test_d_bonus();
		printf("\x1b[33m-----INTEGERS (%%i)----\x1b[0m\n");
		test_i_bonus();
		printf("\x1b[33m----LONG INT (%%u)-----\x1b[0m\n");
		test_u_bonus();
		printf("\x1b[33m---HExADECIMAL (%%x)---\x1b[0m\n");
		test_x_bonus();
		printf("\x1b[33m---HEXADECIMAL (%%x)---\x1b[0m\n");
		test_X_bonus();
		printf("\x1b[33m-----PERCENT (%%%%)------\x1b[0m\n");
		test_percent_bonus();
		if (argv[2] && !strcmp(argv[2], "leaks"))
			system("leaks test");
	}
	else if (!strcmp(argv[1], "a") || !strcmp(argv[1], "all"))
	{
		printf("\x1b[33m------CHARS (%%c)------\x1b[0m\n");
		test_c();
		test_c_bonus();
		printf("\x1b[33m-----STRINGS (%%s)-----\x1b[0m\n");
		test_s();
		test_s_bonus();
		printf("\x1b[33m-----POINTERS (%%p)----\x1b[0m\n");
		test_p();
		test_p_bonus();
		printf("\x1b[33m-----DECIMALS (%%d)----\x1b[0m\n");
		test_d();
		test_d_bonus();
		printf("\x1b[33m-----INTEGERS (%%i)----\x1b[0m\n");
		test_i();
		test_i_bonus();
		printf("\x1b[33m----LONG INT (%%u)-----\x1b[0m\n");
		test_u();
		test_u_bonus();
		printf("\x1b[33m---HExADECIMAL (%%x)---\x1b[0m\n");
		test_x();
		test_x_bonus();
		printf("\x1b[33m---HEXADECIMAL (%%x)---\x1b[0m\n");
		test_X();
		test_X_bonus();
		printf("\x1b[33m-----PERCENT (%%%%)------\x1b[0m\n");
		test_percent();
		test_percent_bonus();
		if (argv[2] && !strcmp(argv[2], "leaks"))
			system("leaks test");
	}
	else
		printf("Unknown command\n");
	
	return (0);
}
