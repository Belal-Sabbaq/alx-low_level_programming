#include "main.h"

/**
 * jack_bauer - longest day in my life
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
			if (i == 2 && j > 3)
				break;
		{
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l < 10; l++)
				{
					_putchar(i + 48);
					_putchar(j + 48);
					_putchar(':');
					_putchar(k + 48);
					_putchar(l + 48);
					_putchar('\n');
				}

			}
		}

	}
}
