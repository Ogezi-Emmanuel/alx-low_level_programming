#include "main.h"
#include <string.h>

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
		if (*str == ' ' || *str == '\t' || *str == '\n')
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
 * split_words - split a string into words
 * @str: the input string
 * @words: the array to store words
 * Return: the number of words found
 */

int split_words(char *str, char **words)
{
	int word_count = 0;
	int in_word = 0;

	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			if (in_word)
			{
				in_word = 0;
				*str = '\0';
			}
			else
				if (!in_word)
				{
					words[word_count++] = str;
					in_word = 1;
				}
		}
		str++;
	}

	return (word_count);
}

/**
 * strtow - splits a string into words
 * @str: the string
 * Return: pointer to an array of strings(words)
 */

char **strtow(char *str)
{
	int i, j, word_count, word_length, actual_word_count;
	char **words, *sp;

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
	sp[word_count];

	actual_word_count = split_words(str, sp);
	for (i = 0; i < actual_word_count; i++)
	{
		word_length = strlen(sp[i]);
		words[i] = (char *)malloc(sizeof(char) * (word_length + 1));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		strcpy(words[i], sp[i]);
	}
	words[actual_word_count] = NULL;
	return (words);
}
