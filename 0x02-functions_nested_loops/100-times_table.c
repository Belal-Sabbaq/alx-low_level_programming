#include "main.h"

/**
 * print_times_table - time table of n
 *
 * @n: input for time table should be <= 15 and >= 0
 */

void print_times_table(int n)
{
	int i, j, f1, f2, f3;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
			{
				_putchar(48);
				_putchar(',');
			}
			else
			{
				f3 = (i * j) % 10;
				f2 = (((i * j) - f3) / 10) % 10;
				f1 = (((i * j) - f2 * 10) - f3) / 100;
				_putchar(' ');
				if (f1 == 0 && (i * j) < 100)
					_putchar(' ');
				else
					_putchar(f1 + 48);
				if (f2 == 0 && (i * j) < 10)
					_putchar(' ');
				else
					_putchar(f2 + 48);
				_putchar(f1 + 48);
				if (j != n)
					_putchar(',');
			}
		}
		_putchar('\n');
	}
}
