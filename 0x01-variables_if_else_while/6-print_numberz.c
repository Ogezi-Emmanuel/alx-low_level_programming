#include <stdio.h>

/**
 * main - the main function
 * Return: 0 if success
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');
	
	return (0);
}
