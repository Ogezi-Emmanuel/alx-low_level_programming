#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point of the program
 * @argc: number of cl arguments
 * @argv: array containing the cl argumentws
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int result;

	(void) argc;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num 2;
	printf("%d\n", result);

	return (0);
}
