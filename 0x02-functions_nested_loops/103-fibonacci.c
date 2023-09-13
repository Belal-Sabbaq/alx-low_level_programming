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
	sum = 0;
	do 
	{
	head = n1 + n2;
	if (sum + head > 5000000)
		break;
	sum = sum + head;
	n1 = n2;
	n2 = head;
	}
	while(sum < 4000000);
	printf("%ld\n", sum);
	return (0);
}

