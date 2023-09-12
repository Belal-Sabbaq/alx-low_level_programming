#include "main.h"

/**
 * _islower - cheack if the given character is lowercase
 *
 * @c: checks the input of the function
 *
 * Return: returns 1 if 'c' lower case
 *	otherwise always 0
 */
int _islower(int c)
{
	if ((int)c < 123 && (int)c > 96)
		return (1);
	else
		return (0);
}
