#include <stdio.h>

/**
 * main - the entry point of the program
 * @argc: number of cl arguments
 * @argv: array containing the cl arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
