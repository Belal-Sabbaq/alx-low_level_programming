#include "main.h"
 /**
  * print_alphabet - print the alphabet
  *
  * Return: none void
  */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i < 'z' + 1; i++)
		_putchar(i);
	_putchar('\n');
}
