#include <stdio.h>

/**
 * main - Entry point
 * Description: find multiples of '3' & '5'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, sum;
/* your code goes there */
	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		
		}
	}
	return (0);
}
