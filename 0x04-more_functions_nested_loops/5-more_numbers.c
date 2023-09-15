#include "main.h"
/**
 * more_numbers - print numbers from 1 to 14 10 times
 */

void more_numbers(void)
{
	int i, j, k;

	for (k = 0; k < 11; k++)
	{
		for (i = 48; i < 58; i++)
		{
			_putchar(i);
			if (i == 57)
			{
				for (j = 48; k < 53; k++)
				{
					_putchar(j);
				}
			}
		}
	}
	_putchar('\n');
}
