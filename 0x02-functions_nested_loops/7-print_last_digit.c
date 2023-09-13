#include "main.h"

/**
 * print_last_digit - prints out the last dight of a number
 * @n: number to be printed
 * Return: last_digit
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = -1 * (n % 10);
		_putchar('0' + last_digit);
	}
	else
	{
		last_digit = n % 10;
		_putchar('0' + last_digit);
	}

	return (last_digit);
}
