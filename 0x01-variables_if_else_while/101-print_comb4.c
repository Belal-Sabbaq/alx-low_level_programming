#include <stdio.h>

/**
 * main - Entry point
 * Description: 'di'
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
int b;
int c;
/* your code goes there */
for (a = 48; a < 58  ; a++)
{
	for (b = 48; b < 58 ; b++)
	{
		for (c = 48; c < 58 ; c++)
		{
			if (a >= b || b >= c || a >= c)
			{
				continue;
			}
			putchar((char)a);
			putchar((char)b);
			putchar((char)c);
			if (a == 55 && b == 56 && c == 57)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
