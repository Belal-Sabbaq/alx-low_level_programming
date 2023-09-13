#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print till we get to '98'
 *
 * @n: number we start from
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("\d, ", n);
		if (n > 98)
			n--
		else
			n++
	}
	putchar('9');
	putchar('8');
	putchar('\n');
}
