/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PTFtester_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 19:13:36 by tlufulua          #+#    #+#             */
/*   Updated: 2021/07/14 22:51:43 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PTFtester_bonus.h"

int	main(int argc, char	**argv)
{
	if (argc == 1 || !strcmp(argv[1], "leaks") || 
			!strcmp(argv[1], "m") || !strcmp(argv[1], "mandatory"))
	{
		printf("\x1b[33m------CHARS (%%c)------\x1b[0m\n");
		test_c_b();
		printf("\x1b[33m-----STRINGS (%%s)-----\x1b[0m\n");
		test_s_b();
		printf("\x1b[33m-----POINTERS (%%p)----\x1b[0m\n");
		test_p_b();
		printf("\x1b[33m-----DECIMALS (%%d)----\x1b[0m\n");
		test_d_b();
		printf("\x1b[33m-----INTEGERS (%%i)----\x1b[0m\n");
		test_i_b();
		printf("\x1b[33m----LONG INT (%%u)-----\x1b[0m\n");
		test_u_b();
		printf("\x1b[33m---HExADECIMAL (%%x)---\x1b[0m\n");
		test_hex_b();
		printf("\x1b[33m---HEXADECIMAL (%%x)---\x1b[0m\n");
		test_X_b();
		printf("\x1b[33m-----PERCENT (%%%%)------\x1b[0m\n");
		test_percent_b();
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
		test_hex_bonus();
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
		test_c_b();
		test_c_bonus();
		printf("\x1b[33m-----STRINGS (%%s)-----\x1b[0m\n");
		test_s_b();
		test_s_bonus();
		printf("\x1b[33m-----POINTERS (%%p)----\x1b[0m\n");
		test_p_b();
		test_p_bonus();
		printf("\x1b[33m-----DECIMALS (%%d)----\x1b[0m\n");
		test_d_b();
		test_d_bonus();
		printf("\x1b[33m-----INTEGERS (%%i)----\x1b[0m\n");
		test_i_b();
		test_i_bonus();
		printf("\x1b[33m----LONG INT (%%u)-----\x1b[0m\n");
		test_u_b();
		test_u_bonus();
		printf("\x1b[33m---HExADECIMAL (%%x)---\x1b[0m\n");
		test_hex_b();
		test_hex_bonus();
		printf("\x1b[33m---HEXADECIMAL (%%x)---\x1b[0m\n");
		test_X_b();
		test_X_bonus();
		printf("\x1b[33m-----PERCENT (%%%%)------\x1b[0m\n");
		test_percent_b();
		test_percent_bonus();
		if (argv[2] && !strcmp(argv[2], "leaks"))
			system("leaks test");
	}
	else
		printf("Unknown command\n");
	
	return (0);
}
