#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer.
 * @s: pointer to string.
 *
 * Return: integer gotten.
 */

int _atoi(char *s)
{
	int ind = 0, ind1 = 0, res = 0, sign = 1;
	char now;

	while (*(s + ind) != '\0')
	{
		now = *(s + ind);
		if (now == '-')
		{
			sign *= -1;
		}
		if (now >= '0' && now <= '9')
		{
			while (*(s + ind1) > 47 && *(s + ind1) < 58)
			{
				res = (res * 10) + *(s + ind1) - '0';
				ind1++;
			}
			break;
		}
		ind++;
	}
	if (sign < 0)
		res *= sign;
	return (res);
}
