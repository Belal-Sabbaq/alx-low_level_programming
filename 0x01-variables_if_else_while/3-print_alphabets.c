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
for (a = 'a' ; a < 'z' + 1  ; a++)
	putchar(a);
for (a = 'A' ; a < 'Z' + 1  ; a++)
	putchar(a);
putchar('\n');
return (0);
}
