#include <stdio.h>

/**
 * main - Entry point
 * Description: fibo
 * Return: Always 0 (Success)
 */
int main(void)
{
	long n1, n2, head, sum;
/* your code goes there */
	n1 = 1;
	n2 = 2;
	sum = 2;
	do 
	{
	head = n1 + n2;
	if (head % 2 ==0)
		sum = sum + head;
	n1 = n2;
	n2 = head;
	}
	while(head < 4000000);
	printf("%ld\n", sum);
	return (0);
}

