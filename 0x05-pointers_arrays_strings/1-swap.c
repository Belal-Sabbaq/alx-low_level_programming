#include "main.h"

/**
 * swap_int - swapt two values
 * @a: first variable to be swapped
 * @b: second var to be swapped
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
