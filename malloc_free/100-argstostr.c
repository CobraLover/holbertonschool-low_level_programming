#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */

char *argstostr(int ac, char **av)
{
	int arg_length, i, index = 0, total_length = 0;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			total_length += strlen(av[i]) + 1;
		}
	}

	result = malloc(total_length + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			arg_length = strlen(av[i]);
			strcpy(result + index, av[i]);
			index += arg_length;
			result[index] = '\n';
			index++;
		}
	}
	result[index] = '\0';
	return (result);
}
