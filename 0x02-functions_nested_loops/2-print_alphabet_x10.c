#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 11; i++)
		for (i = 'a'; i < 'z' + 1; i++)
		{
			_putchar(i);
			_putchar('\n');
		}
}
