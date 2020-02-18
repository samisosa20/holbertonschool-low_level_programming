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
		y = x / 2;
	else
		y = (x - 1) / 2;
	while (y <= x)
	{
		_putchar(str[y]);
		y++;
	}
	_putchar('\n');
}
