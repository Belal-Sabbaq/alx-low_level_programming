#include "main.h"

/**
 * _puts - output chars and strings
 * @str: pointer to the first element
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
