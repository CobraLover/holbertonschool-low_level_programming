#include <stdio.h>

/**
 * _strlen - Calculate the lenght of a string
 * @s: string
 *
 * Return: lenght of the s string
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0';)
	{
		c++;
		s++;
	}
	return (c);
}
