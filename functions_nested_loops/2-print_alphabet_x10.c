#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lower
 * Return : Always return 0
 */

void print_alphabet_x10(void)
{
	char j;
	int i;

	{
	for (i = 0; i <= 9; i++)
	for (j = 'a'; j <= 'z'; j++)
		_putchar(j);
	}
	_putchar('\n');
}
