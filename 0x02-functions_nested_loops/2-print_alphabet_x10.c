#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i < 11; i++)
		for (j = 'a'; j < 'z' + 1; j++)
		{
			_putchar(j);
		}
			_putchar('\n');
}
