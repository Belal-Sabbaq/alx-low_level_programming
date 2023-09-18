#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer to the string
 * Return: return string lengh
 */

void rev_string(char *s)
{
	int i, c, j, k;
	char *strev;
/**after declration */
	c = 0;
	i = 0;
	k = 0;
	while (*(s + i) != '\0')
	{
		c++;
		i++;
	}
	for (j = c - 1; j >= 0; j--)
	{
		*(strev + k) = *(s + j);
		k++;
	}
	*(strev + (k + 1)) = '\0';
	s = strev;
	_putchar('\n');
}
