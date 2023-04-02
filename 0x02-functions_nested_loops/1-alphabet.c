#include "main.h"
#include <stdio.h>

/**
 * main - main point
 * Description: print alphabet a to z in smaller case
 * print_alphabet - print all alphabet in lowercase
 * _putchar: 'print letter a to z on new line'
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}


