#include "main.h"
#include <stdio>
/**
 * print_array - output array
 * @a : array
 * @n : arrays size
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d");
		if (i != n - 1)
			printf(", ");
	}
}
