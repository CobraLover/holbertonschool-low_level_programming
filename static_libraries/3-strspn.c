#include "main.h"
#include <unistd.h>

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, f = 0, flag = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				flag = 1;
				f++;
			}
		}
		if (flag == 0)
		{
			return (f);
		}
	}
	return (0);
}
