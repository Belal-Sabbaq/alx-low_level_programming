i#include "main.h"

/**
 * _isalpha - cheack if the given character is alpha char
 *
 * @c: checks the input of the function
 *
 * Return: returns 1 if 'c' alpha char
 *	otherwise always 0
 */
int _isalpha(int c)
{
	if ((int)c < 123 && (int)c > 64)
		return (1);
	else
		return (0);
}
