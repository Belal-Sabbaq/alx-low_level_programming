#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'di'
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int x1;
x1 = n % 10;
printf("Last digit of %d is %d", n, x1);
if (x1 > 5)
	printf("and is greater than 5\n");
else if (x1 != 0)
	printf("and is less than 6 and not 0\n");
else
	printf("and is 0\n");
return (0);
}
