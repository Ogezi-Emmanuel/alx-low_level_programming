#include <stdio.h>

/**
 * main - entry point of the program
 * @argc: number of cl arguments
 * @argv: array containing he cl arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
