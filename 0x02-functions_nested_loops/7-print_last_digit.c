#include "holberton.h"

/**
* print_last_digit - print last number.
* @i: variable to put positive.
* Return: Always 0.
*/
int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (j < 0)
	{
		j = -j;
	}
	_putchar(j + '0');
	return (j % 10);
}
