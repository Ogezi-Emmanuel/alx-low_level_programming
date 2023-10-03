#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point of the program
 * @argc: number of cl arguments
 * @argv: array containing the cl argumentws
 */

int main(int argc, char *argv[])
{
	(void) argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
	}

	return (1);
}
