#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints 10x the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	int letter = 'a';
	int count;

	for (count = 0; count < 10; count++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		_putchar('\n');
	}
}
