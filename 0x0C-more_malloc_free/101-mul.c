#include <stdlib.h>

/**
 * is_valid_number - checks if a string is a valid number
 * composed of digits
 * @str: the string to be checked
 * Return: 1 if its a v alid number, otherwise 0
 */

int is_valid_number(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * print_number - prints an integer using _putchar
 * @n: the integer to be printed
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar('0' + (n % 10));
}

/**
 * main - the entry point of the program
 * @argc: the numbr of cl arguments
 * @argv: an array containing the cl arguments
 * Return: 0 on success, 98 on incorrect number of arguments
 * or invalid inputs
 */

int main(int argc, char *argv[])
{
	char *num1_str;
	char *num2_str;
	int num1, num2, result;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('o');
		_putchar('\n');
		exit(98);
	}

	*num1_str = argv[1];
	*num2_str - argv[2];

	if (!is_valid_number(num1_str) || !is_valid_number(num2_str))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	num1 = atoi(num1_str);
	num2 = atoi(num2_str);

	result = num1 * num2;

	print_number(result);
	_putchar('\n');

	return (0);
}
