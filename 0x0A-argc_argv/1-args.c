#include <stdio.h>

/**
 * main - entry point of the program
 * @argc: the number of cl arguments
 * @argv: array containing the cl arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
