#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *_strdup - returns a pointer to a newly alloctaed
  *space in memory which contains a copy of the string
  *passed.
  *@str: pointer to string being duplicated.
  *
  *Return: NULL if str is NULL.
  *pointer to duplicated string on success.
  *NULL if memory was insufficient.
  */

char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	duplicate = malloc(strlen(str) + 1);

	if (duplicate != NULL)
	{
		strcpy(duplicate, str);
	}
	return (duplicate);
}
