#include "holberton.h"

/**
* print_line - Where n is the number of times the character
* _ should be printed.
* @n: number to print _.
* Return: Always 0.
*/
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
