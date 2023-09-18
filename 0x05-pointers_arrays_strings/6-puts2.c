#include "main.h"

/**
 * _puts2 - output half strings
 * @str: pointer to the first element
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
