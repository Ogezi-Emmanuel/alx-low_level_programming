#include "main.h"
#include <string.h>

/**
 * str_concat - a function that concatnates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to a newly allocated space in memory
 * or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len1, len2;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	ptr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		ptr[j] = s2[j];
	}

	ptr[len1 + len2] = '\0';

	return (ptr);
}
