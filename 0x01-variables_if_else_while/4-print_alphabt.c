#include <stdio.h>

/**
 * main - this is the main function
 * Return: 0 when success
 */

int main(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		if (letters != 'e' && letters != 'q')
		{
			putchar(letters);
		}
		letters++;
	}
	putchar('\n');

		return (0);
}
