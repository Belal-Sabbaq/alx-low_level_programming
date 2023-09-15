#include "main.h"
/**
 * print_number - print number
 * @n: input number
 */

void print_number(int n)
{
	int temo, c, i, j, z, k;

	j = 1;
	c = 0;
	z = 0;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	temo = n;
	if (n == 0)
	{
		_putchar(48);
		_putchar('\n');
	}
	else
	{
		while (n > 9)
		{
			while (temo > 9)
			{
				if (temo % 10 == 0)
					z++;
				temo = temo / 10;
				c++;
			}
			_putchar(temo + 48);
			for (i = 1; i <= c; i++)
			{
				j = 10 * j;
			}
			if (z != 0)
			{
				for (k = 0; k < z; k++)
				{
				_putchar(48);
				}
				z = 0;
			}
			n = n - temo * j;
			temo = n;
			c = 0;
			j = 1;
		}
		_putchar(n + 48);
		_putchar('\n');
	}
}
