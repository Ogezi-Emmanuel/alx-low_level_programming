#include <stdio.h>
#include "main.h"

/**
 * void print_alphabet(void) - the main file
 * print_alphabet - Prints the lower alphabet followed by a new line
 * Return: 0 when successful
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

	return (0);
}
