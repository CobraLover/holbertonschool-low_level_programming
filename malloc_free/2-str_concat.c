#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates 2 strings
 *
 * @s1: first string
 * @s2: string to add to end of of first string
 *
 * Return: pointer to newly allocated string concatenation
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t len_s1, len_s2, total_length;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	total_length = len_s1 + len_s2;

	result = malloc(total_length + 1);

	if (result != NULL)
	{
		strcpy(result, s1);
		strcpy(result + len_s1, s2);
	}
	return (result);
}
