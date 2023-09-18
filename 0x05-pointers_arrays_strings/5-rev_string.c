#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer to the string
 * Return: return string lengh
 */

void rev_string(char *s)
{
	int i, c, j, k;
	char temp;
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
		if (k ==j || j < k)
			break;
		temp = *(s + j);
		*(s + j) = *(s + k);
		*(s + k) = temp;
		k++;
	}
}
