#include "holberton.h"

/**
* print_rev - a function that prints a string,
* in reverse, followed by a new line.
* @s: string.
*
* Return: null.
*/
void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	while (x > 0)
	{
		_putchar(s[x - 1]);
		x--;
	}
	_putchar('\n');
}
