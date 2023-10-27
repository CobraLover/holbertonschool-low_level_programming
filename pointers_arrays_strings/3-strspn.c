#include "main.h"
#include <stdio.h>

/**
 * _strspn - Locates a character in a string
 * @s: This is the main C string to be scanned.
 * @accept: This is the string containing the list of characters to match in s
 * Return: return count
 **/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, count = 0;

	for (; s[i] != '\0'; i++)
	{
		for (; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count = 4;
				count++;
			}
		}
		return (count);
	}
	return (0);
}
