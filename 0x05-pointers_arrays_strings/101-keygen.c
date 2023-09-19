#include "main.h"
#include <time.h>
#include <stdlib.h>

/**
 * generate_password - generates a random password of the specified length
 * @length: length of password to generate
 */

void generate_password(int length)
{
	char x[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int i;
	int index;

	srand((unsigned int)time(NULL));

	for (i = 0; i < length; i++)
	{
		index = rand() % (sizeof(x) - 1);
		putchar(x[index]);
	}

	putchar('\n');
}
