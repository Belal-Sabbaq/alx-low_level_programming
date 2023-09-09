#include <stdio.h>

/**
 * main - Entry point
 * Description: 'di'
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
/* your code goes there */
for (a = 'z' ; a > 'a' - 1  ; a--)
	putchar(a);
putchar('\n');
return (0);
}
