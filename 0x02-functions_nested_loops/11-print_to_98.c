#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number to begin printing from
 */

void print_to_98(int n)
{
	n = 0;

	while (n <= 98)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');

		n++;
	}
	while (n > 98)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');

		n--;
	}
}
