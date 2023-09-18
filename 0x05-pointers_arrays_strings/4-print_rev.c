#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: pointer to the string
 * Return: return string lengh
 */

void print_rev(char *s)
{
	int i, c, j;
/**after declration */
	c = 0;
	i = 0;
	while (*(s + i) != '\0')
	{
		c++;
		i++;
	}
	for (j = c; j >= 0; j--)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');
}
