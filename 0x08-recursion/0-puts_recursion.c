#include "holberton.h"

/**
* _puts_recursion - function that prints a string, followed by a new line.
* @s:  pointer to print.
* Return: none.
*/
void _puts_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		_putchar(s[i]);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
