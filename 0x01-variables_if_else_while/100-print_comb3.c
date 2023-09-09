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
/* your code goes there */
for (a = 48; a < 58  ; a++)
{
	for (b = 48; b < 58 ; b++)
	{
		if (a >= b)
		{
		continue;
		}
		putchar((char)a);
		putchar((char)b);
		if (a == 56 && b == 57)
			continue;
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
