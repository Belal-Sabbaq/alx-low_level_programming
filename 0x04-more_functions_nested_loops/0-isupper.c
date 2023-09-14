#include "main.h"
/**
 * _isupper - check the input if its upper case or not
 * @c: input char
 * Return: 1 if success
 * 0 otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
