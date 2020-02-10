#include "holberton.h"

/**
* print_sign - evaluate if the number is greater or lees than 0.
* @n: number to evaluate.
* Return: Always 0.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	} else
	{
		_putchar('0');
		return (0);
	}
}
