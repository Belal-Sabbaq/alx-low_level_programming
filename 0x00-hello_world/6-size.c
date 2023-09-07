#include <stdio.h>

/**
 *main - Entry point
 *Description: 'print data types sizes'
 * Return: Always 0 (Success)
 */
int main(void)
{
char a = 'a';
int b = 1;
long c = 0;
long long d = 0;
float e = 1;
/*---------------- */
printf("Size of a char: %d byte(s)\n", sizeof(a));
printf("Size of a int: %d byte(s)\n", sizeof(b));
printf("Size of a long int: %d byte(s)\n", sizeof(c));
printf("Size of a long long int: %d byte(s)\n", sizeof(d));
printf("Size of a float: %d byte(s) \n", sizeof(e));
return (0);
}
