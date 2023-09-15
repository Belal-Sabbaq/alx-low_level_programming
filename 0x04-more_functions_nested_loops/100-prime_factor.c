#include <stdio.h>

/**
 * main - entry point
 * Return: 0 always
 */

int main(void)
{
	long i, k;
	long largest;

	k = 612852475143;
	largest = 0;
	for (i = 2; i < k; i++)
	{
		if (k % i == 0)
		{
			k = k / i;
			if (i > largest)
				largest = i;
			i = 0;
		}
	}
	printf("%ld \n", largest);
	return (0);
}


