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
int d;
int dg1;
int dg2;
/* your code goes there */
for (a = 48; a < 58  ; a++)
{
	for (b = 48; b < 58 ; b++)
	{
		for (c = 48; c < 58 ; c++)
		{
			for (d = 48 ; d < 58 ; d++){
				dg1 = a * 10 + b;
				dg2 = c * 10 + d;
				if (dg1 >= dg2)
				{
					continue;
				}
				putchar((char)a);
				putchar((char)b);
				putchar(' ');
				putchar((char)c);
				putchar((char)d);
				if (dg1 == 626 && dg2 == 627)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}
