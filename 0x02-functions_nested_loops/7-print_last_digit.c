#include "main.h"

/**
 * print_last_digit - print last digit
 *
 * @n: checks the input of the function
 *
 * Return: returns last digit of 'n'
 */

int print_last_digit(int n)
{
	int temp;

	temp = n % 10;
	_putchar(temp + 48);
	return (temp);
}
