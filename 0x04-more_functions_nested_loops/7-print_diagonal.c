#include "main.h"
/**
 * print_diagonal - print diagonal /
 * @n: number of /
 */

void print_diagonal(int n)
{
	char p;
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for int (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j == i)
				{
					_putchar(92);
					+putchar('\n');
				{
				else
					_putchar(' ');
			}
		}
	}
}
