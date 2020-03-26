#include "holberton.h"

/**
* print_binary - convert the input into binary
* @n: The input number
* Return: None return.
*/
void print_binary(unsigned long int n)
{
	int i = 0, count, k, aux;

	if (n == 0)
	{
		_putchar('0');
	}

	aux = n;

	while (aux != 0)
	{
		i++;
		aux = aux >> 1;
	}

	for (count = i - 1; count >= 0; count--)
	{
		k = n >> count;
		if (k & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
