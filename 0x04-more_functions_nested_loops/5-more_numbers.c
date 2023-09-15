#include "main.h"
/**
 * more_numbers - print numbers from 1 to 14 10 times
 */

void more_numbers(void)
{
	int i, j, k;

	for (k = 0; k < 10; k++)
	{
		for (i = 0; i < 15; i++)
		{
			j = i;
			if (i > 9)
			{
				_putchar(49);
				j = j - 10;
			}
			_putchar(j + 48);
		}
		_putchar('\n');
	}
}
