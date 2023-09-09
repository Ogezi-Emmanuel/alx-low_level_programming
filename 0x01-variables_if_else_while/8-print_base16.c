#include <stdio.h>

/**
 * main - the main function
 * Return: 0 when successful
 */

int main(void)
{
	char x = 0;

	while (x < 10)
	{
		putchar('0' + x);
		x++;
	}

	x = 0;

	while (x < 6)
	{
		putchar('a' + x);
		x++;
	}
	putchar('\n');
	
	return (0);
}
