#include "holberton.h"

/**
* print_last_digit - print last number.
* @i: variable to put positive.
* Return: Always 0.
*/
int print_last_digit(int i)
{
	int j;

	if (i < 0)
		i = i * -1;
	j = i % 10;
	_putchar(j + '0');
	return (j);
}
