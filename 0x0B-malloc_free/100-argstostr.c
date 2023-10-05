#include "main.h"

/**
 * argstostr - concatnates all the arguments from a program
 * @ac: the number of arguments
 * @av: array of strings representing the arguments
 * Return: a pointer to the concatnated string or NULL on failure
 */

char *argstostr(int ac, char **av)
{
	int al, tl = 0, i;
	int cp = 0;
	char *new_string;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		al = 0;

		while (av[i][al] != '\0')
		{
			al++;
		}
		tl += al + 1;
	}

	new_string = (char *)malloc(tl + 1);

	if (new_string == NULL)
	{
		return (NULL);
	}
	cp = 0;

	for (i = 0; i < ac; i++)
	{
		al = 0;

		while (av[i][al] != '\0')
		{
			new_string[cp++] = av[i][al++];
		}
		new_string[cp++] = '\n';
	}
	new_string[cp] = '\0';
	return (new_string);
}
