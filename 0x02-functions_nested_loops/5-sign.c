#include "main.h"

/**
 * print_sign - prints the sign of a number
 * n: number to be printed
 * Return: 1 and print + if n is grater than 0
 * 0 and print 0 if n is zero
 * -1 and print - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		putchar('-1');
		return (-1);
	}
}
