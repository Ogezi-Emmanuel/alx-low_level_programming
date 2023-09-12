#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10x the alphabet
 */

void print_alphabet_x10(void)
{
	int letter = 'a';
	int count;

	for (count = 0; count < 10; count++)
	{
		while (letters <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
