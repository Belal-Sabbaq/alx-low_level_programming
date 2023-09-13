#include <stdio.h>

/**
 * main - Entry point
 * Description: find multiples of '3' & '5'
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
/* your code goes there */
	for (i = 0; i < 1024; i++)
	{
		if(i % 3 == 0 || i % 5 == 0)
		{
			if (i != 1023)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		
		}
	}
	return (0);
}
