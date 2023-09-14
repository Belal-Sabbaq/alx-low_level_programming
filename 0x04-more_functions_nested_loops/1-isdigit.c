i#include "main.h"
/**
 * _isdigit - check the input if is a digit or not
 * @c: input char
 * Return: 1 if success
 * 0 otherwise
 */

int _isdigit(int c);
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
