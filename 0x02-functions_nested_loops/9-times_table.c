#include "main.h"

/**
 * times_table - printd the 9 times table
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= i; j++)
		{
			_putchar(i * j + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
