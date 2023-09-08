#include <stdio.h>

/**
 * main - this is the main function
 * Return: 0 when successful
 */

int main(void)
{
	char letters = 'a';
	char LETTERS = 'A';

	while (letters <= 'z')
	{
		putchar(letters);
		letters++;
	}
	while (LETTERS <= 'Z')
	{
		putchar(LETTERS);
		LETTERS++;
	}
	putchar('\n');

	return (0);
}
