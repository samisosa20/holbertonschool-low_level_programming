#include "holberton.h"

/**
* puts_half -  print second half.
* @str: string.
*
* Return: null.
*/
void puts_half(char *str)
{
	int x = 0, y = 0;

	while (str[x] != '\0')
	{
		x++;
	}

	if (x % 2 == 0)
	{
		for (y = x / 2; y <= x; y++)
			_putchar(str[y]);
	}
	else
	{
		for (y = x -((x - 1) / 2); y <= x; y++)
			_putchar(str[y]);
	}

	_putchar('\n');
}
