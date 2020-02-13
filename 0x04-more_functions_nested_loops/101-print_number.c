#include "holberton.h"
#include <limits.h>

/**
* print_number - print any number.
* @n: input number to print.
* Return: Always 0.
*/
void print_number(int n)
{
	int aux = 0;

	if (n == INT_MIN)
	{
		n = n + 1;
		aux = 1;
	}

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	if (n / 10 != 0)
		print_number(n / 10);

	if (aux == 1)
		_putchar('8');
	else
		_putchar(n % 10 + '0');
}
