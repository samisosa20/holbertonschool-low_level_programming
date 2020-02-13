#include "holberton.h"

/**
* print_number - print any number.
* @n: input number to print.
* Return: Always 0.
*/
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	if (n / 10 != 0)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
