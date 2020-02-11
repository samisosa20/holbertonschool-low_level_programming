#include "holberton.h"

/**
* print_last_digit - print last number.
* @i: variable to put positive.
* Return: Always 0.
*/
int print_last_digit(int i)
{
	if (i < 0)
	{
		i = -i;
	}
	_putchar(i % 10 + '0');
	return (i % 10);
}
