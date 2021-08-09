#!/bin/bash
if [ -z libftprintf.a ]
	then
		make bonus
fi
if [ -e main.c ]
	then
		gcc main.c libftprintf.a
		./a.out >> prueba
		cat -e prueba
		rm prueba
		rm a.out
	else
		echo "Script needs a main.c file"
		make fclean
fi
