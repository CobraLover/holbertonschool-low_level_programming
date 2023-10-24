#include "main.h"
#include <stdio.h>

/**
 *leet - encodes a string into 1337.
 *letters a and A are replaced by 4.
 *Letters e and E are replaced by 3
 *Letters o and O are replaced by 0
 *Letters t and T are replaced by 7
 *Letters l and L are replaced by 1
 *@s: pointer to string.
 *
 *Return: pointer to s.
 */

char *leet(char *s)
{
	char Letters[] = "aAeEoOtTlL";
	char Nums[] = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == Letters[j])
			{
				s[i] = Nums[j];
			}
		}
	}
	return (s);
}
