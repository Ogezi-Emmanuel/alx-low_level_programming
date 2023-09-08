#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this is the main function
 * Return: 0 when successful
 */

int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	if (a > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, a);
	}
	else if (a == 0)
	{
		printf("Last digit of %d is %d and is 0", n, a);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, a);
	}
	printf("\n");

	return (0);
}
