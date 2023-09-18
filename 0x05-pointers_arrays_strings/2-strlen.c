#include "main.h"

/**
 * _strlen : get string
 * @s: pointer to the string
 * Return: return string lenght
 */

int _strlen(char *s)
{
	int i, c;
/**after declration */
	c = 0;
	i = 0;
	while (*(s + i) != '\0')
	{
		c++;
		i++;
	}
	return (c);
}
