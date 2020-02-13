#include "holberton.h"

/**
* print_most_numbers - print 0 to 9 less 2 and 4..
*
* Return: Always 0.
*/
void print_most_numbers(void)
{
	int c = 48;

	for (; c <= 57; c++)
	{
		if (c != 50 && c != 52)
			_putchar(c);

	}
	_putchar('\n');
}
