#include "main.h"

/**
 * _abs - return absolute value
 *
 * @n: checks the input of the function
 *
 * Return: returns absolute value of the input
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1 * n);
	}
	return (2);
}
