#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lower
 * Return : Always return 0
 */

void print_alphabet_x10(void)
{
	char j;
	int i = 0;

	while (i <= 9)
	{
	for (j = 'a'; j <= 'z'; j++)
	{
	_putchar(j);
	}
	_putchar('\n');
	i++;
	}
}
