#include <stdio.h>

/**
 * main - entry point
 *
 * Return: return 0 success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("BUZZ ");
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}