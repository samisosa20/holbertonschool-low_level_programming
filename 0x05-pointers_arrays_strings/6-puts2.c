#include "holberton.h"

/**
* puts2 -  print character de por medio.
* @str: string.
*
* Return: null.
*/
void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		if (x % 2 == 0)
			_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
