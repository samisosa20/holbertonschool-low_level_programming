#include "holberton.h"

/**
* print_diagonal - Where n is the number of times the character \ should be printed.
* @n: number to print _.
* Return: Always 0.
*/
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
