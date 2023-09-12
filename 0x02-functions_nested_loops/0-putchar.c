#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: 'di'
 * Return: Always 0 (Success)
 */
int main(void)
{
/* your code goes there */
	char arr[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(arr[i]);
	}
	_putchar('\n');
	return (0);
}
