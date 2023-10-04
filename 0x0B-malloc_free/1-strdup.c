#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated place in
 * memory,which contains a copy of the string given as parameters
 * @str: the string
 * Return: NULL in case of error, otherwise pointer to allocated space
 */

char *_strdup(char *str)
{
	char *dup;
	int i;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
