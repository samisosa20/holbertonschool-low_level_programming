#include "holberton.h"

/**
* print_triangle - print to triangle with #.
* @size: size to print #.
* Return: Always 0.
*/
void print_triangle(int size)
{
	int a, b, c, d = 1;

	if (size <= 0)
		_putchar('\n');

	for (a = 0; a < size; a++)
	{
		for (b = d; b < size; b++)
		{
			_putchar(' ');
		}
		for (c = b; c < size + d; c++)
		{
			_putchar(35);
		}
		_putchar('\n');
		d++;
	}
}
