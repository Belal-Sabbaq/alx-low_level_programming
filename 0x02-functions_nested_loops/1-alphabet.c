#include "main.h"
 /**
  * print_alphabet - print the alphabet using _putchar defined in main.h
  */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i < 'z' + 1; i++)
		_putchar(i);
	_putchar('\n');
}
