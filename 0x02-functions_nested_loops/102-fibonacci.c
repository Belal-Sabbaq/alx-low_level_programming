#include <stdio.h>

/**
 * main - Entry point
 * Description: fibo
 * Return: Always 0 (Success)
 */
int main(void)
{
	long n1, n2, head, c;
/* your code goes there */
	n1 = 1;
	n2 = 2;
	c = 2;
	printf("1, 2, ");
	while(c < 49)
	{
	head = n1 + n2;
	printf("%d, ", head);
	n1 = n2;
	n2 = head;
	c++;
	}
	printf("%d\n", n1 + n2);
	return (0);
}
