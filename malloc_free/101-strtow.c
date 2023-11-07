#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Checks if a character is a is_whitespace character (space, tab, or newline).
 *
 * @param c The character to check.
 * @return 1 if the character is_whitespace character, 0 otherwise.
 */

static int is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * Splits a string into words separated by spaces, tabs, or newline characters.
 *
 * @param str The input string to be split.
 * @return dyn. allocated array of strings containing the words in the string.
 * The last element of the array is set to NULL.
 * Returns NULL if the string is empty or NULL, or if memory allocation fails.
 */

char **strtow(char *str)
{
	int wordLength, wordCount = 0;
	char *start, **wordArray;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	wordArray = (char **)malloc(sizeof(char *));

	if (wordArray == NULL)
	{
		return (NULL);
	}

	while (*str)
	{
		while (is_whitespace(*str))
		{
			str++;
		}

		if (*str == '\0')
		{
			break;
		}

		start = str;

		while (*str && !is_whitespace(*str))
		{
			str++;
		}

		wordArray = (char **)realloc(wordArray, (wordCount + 2) * sizeof(char *));
		wordLength = str - start;

		if (wordArray == NULL)
		{
			return (NULL);
		}

		wordArray[wordCount] = (char *)malloc(wordLength + 1);

		if (wordArray[wordCount] == NULL)
		{
			return (NULL);
		}
		strncpy(wordArray[wordCount], start, wordLength);
		wordArray[wordCount][wordLength] = '\0';
		wordCount++;
	}
	wordArray[wordCount] = NULL;
	return (wordArray);
}
