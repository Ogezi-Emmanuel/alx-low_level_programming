#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the lower alphabet followed by a new line
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
