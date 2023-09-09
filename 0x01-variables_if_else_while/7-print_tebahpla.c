#include <stdio.h>

/**
 * main - the main function
 * Return: 0 when success
 */

int main(void)
{
	char letters = 'z';

	while (letters >= 'a')
	{
		putchar(letters);
		letters--;
	}
	putchar('\n');

	return (0);
}
