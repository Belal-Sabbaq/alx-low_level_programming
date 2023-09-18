#include "main.h"

/**
 * _strcpy - copy string
 * @src: source string
 * @dest: where copied string stored at
 * Return: return the copied string 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	int i;
/**after declration */
	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
