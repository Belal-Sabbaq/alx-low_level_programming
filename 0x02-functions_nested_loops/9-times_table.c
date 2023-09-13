#include "main.h"

/**
 * timetable - time table from '1' to '9'
 */

void times_table(void)
{
	int i, j, f1, f2;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				_putchar(48);
				_putchar(',');
			}
			if (i * j > 9)
			{
				f2 = (i * j) % 10;
				f1 = ((i * j) - f2) / 10;
				_putchar(' ');
				_putchar(f1 + 48);
				_putchar(f2 + 48);
				if (j != 0)
					_putchar(',');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((i * j) + 48);
				if (j != 9)
					_putchar(',');

			}
		}
		_putchar('\n');
	}
}
