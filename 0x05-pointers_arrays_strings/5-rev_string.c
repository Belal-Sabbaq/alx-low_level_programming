#include "main.h"

/**
 * rev_string - print string in reverse
 * @s: pointer to the string
 * Return: return string lengh
 */

void rev_string(char *s)
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
	for (j = c - 1; j >= 0; j--)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');
}
