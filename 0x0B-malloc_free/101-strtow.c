#include "main.h"

/**
 * count_words - count the number of words in a string
 * @str: the string
 * Return: number of words
 */

int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (*str == ' ')
			if (in_word)
			{
				in_word = 0;
			}
			else
			{
				if (!in_word)
				{
					count++;
					in_word = 1;
				}
			}
		str++;
	}

	return (count);
}

/**
 * strtow - splits a string into words
 * @str: the string
 * Return: pointer to an array of strings(words)
 */

char **strtow(char *str)
{
	int i, j, word_count;
	char *token;
	char **words;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	word_count = count_words(str);
	if (word_count == 0)
	{
		return (NULL);
	}
	words = (char **)malloc(sizeof(char *) * (word_count + 1));

	if (words == NULL)
	{
		return (NULL);
	}
	i = 0;

	token = strtok(str, " ");
	while (token != NULL)
	{
		words[i] = strdup(token);
		if (word[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		token = strtok(NULL, " ");
		i++;
	}
	words[i] = NULL;
	return (words);
}
