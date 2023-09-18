#include "main.h"

/**
 * puts_half - print halfstring
 * @str: pointer to the string
 * Return: return string lengh
 */

void puts_half(char *str)
{
	int i, c, j;
/**after declration */
	c = 0;
	i = 0;
	while (*(str + i) != '\0')
	{
		c++;
		i++;
	}
	for (j = ((c - 1) / 2); j < c; j++)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
}
