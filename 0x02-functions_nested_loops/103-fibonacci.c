#include <stdio.h>

/**
 * main - Entry point
 * Description: fibo
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2, head, sum;
/* your code goes there */
	n1 = 1;
	n2 = 2;
	c = 2;
	printf("1, 2, ");
	while(sum < 4000000 )
	{
	head = n1 + n2;
	sum = sum + head;
	n1 = n2;
	n2 = head;
	}
	printf("%d\n", sum)
	return (0);
}
