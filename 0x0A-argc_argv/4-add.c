#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point of the program
 * @argc: number of cl arguments
 * @argv: array containing cl arguments
 * Return: 1 if error, 0 if function runs properly
 */

int main(int argc, char *argv[])
{
	int t, i;
	int num;
	char *p;

	t = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
			{
				t += num;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	printf("%d\n", t);

	return (0);
}
