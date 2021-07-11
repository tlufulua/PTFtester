/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlufulua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 13:57:31 by tlufulua          #+#    #+#             */
/*   Updated: 2021/07/11 03:53:07 by tlufulua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PTFtester.h"

int	main(int argc, char	**argv)
{
	char	*str;

	str = "Hola Mundo";
	
	if (argc == 1 || !strcmp(argv[1], "leaks") || 
			!strcmp(argv[1], "m") || !strcmp(argv[1], "mandatory"))
	{
		printf("\x1b[33m-----STRINGS (%%s)-----\x1b[0m\n");
		test_s();
		printf("\x1b[33m-----POINTERS (%%s)----\x1b[0m\n");
		test_p();
		printf("\x1b[33m-----DECIMALS (%%s)----\x1b[0m\n");
		test_d();
		printf("\x1b[33m-----PERCENT (%%s)-----\x1b[0m\n");
		test_percent();
		if ((argv[1] && !strcmp(argv[1], "leaks")) || 
					(argv[2] && !strcmp(argv[2], "leaks")))
			system("leaks test");
	}
	else if (!strcmp(argv[1], "b") || !strcmp(argv[1], "bonus"))
	{
		printf("\x1b[33m-----STRINGS (%%s)-----\x1b[0m\n");
		test_s_bonus();
		printf("\x1b[33m-----POINTERS (%%s)----\x1b[0m\n");
		test_p_bonus();
		printf("\x1b[33m-----DECIMALS (%%s)----\x1b[0m\n");
		test_d_bonus();
		printf("\x1b[33m-----PERCENT (%%s)-----\x1b[0m\n");
		test_percent_bonus();
		if (argv[2] && !strcmp(argv[2], "leaks"))
			system("leaks test");
	}
	else if (!strcmp(argv[1], "a") || !strcmp(argv[1], "all"))
	{
		printf("\x1b[33m-----STRINGS (%%s)-----\x1b[0m\n");
		test_s();
		test_s_bonus();
		printf("\x1b[33m-----POINTERS (%%s)----\x1b[0m\n");
		test_p();
		test_p_bonus();
		printf("\x1b[33m-----DECIMALS (%%s)----\x1b[0m\n");
		test_d();
		printf("\x1b[33m-----PERCENT (%%s)-----\x1b[0m\n");
		test_percent();
		if (argv[2] && !strcmp(argv[2], "leaks"))
			system("leaks test");
	}
	else
		printf("Unknown command\n");
/*	// %i
	printf("--------%%i--------\n");
	printf("(%i)\n", printf("1printf: %i\n", -42));
	printf("(%i)\n", ft_printf("2printf: %i\n", -42));
	
	// %d
	printf("--------%%d--------\n");
	printf("(%i)\n", printf("1printf: %d\n", -42));
	printf("(%i)\n", ft_printf("2printf: %d\n", -42));
	
	// %c
	printf("--------%%c--------\n");
	printf("(%i)\n", printf("1print: %c\n", *str));
	printf("(%i)\n", ft_printf("2printf: %c\n", *str));
	
	// %x
	printf("--------%%x--------\n");
	printf("(%i)\n", printf("1printf: %x\n", -458));
	printf("(%i)\n", ft_printf("2printf: %x\n", -458));
	printf("(%i)\n", printf("1printf: %#x\n", -458));
	printf("(%i)\n", ft_printf("2printf: %#x\n", -458));
	
	// %X
	printf("--------%%X--------\n");
	printf("(%i)\n", printf("1printf: %X\n", -458));
	printf("(%i)\n", ft_printf("2printf: %X\n", -458));
	printf("(%i)\n", printf("1printf: %#X\n", -458));
	printf("(%i)\n", ft_printf("2printf: %#X\n", -458));
	
	// %u
	printf("--------%%u--------\n");
	printf("(%i)\n", printf("1printf: %u\n", -458));
	printf("(%i)\n", ft_printf("2printf: %u\n", -458));


*/	return (0);
}
