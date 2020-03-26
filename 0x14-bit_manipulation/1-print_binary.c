#include "holberton.h"

/**
* print_binary - convert the input into binary
* @n: The input number
* Return: None return.
*/
void print_binary(unsigned long int n)
{
	long int i = 0, j;
	char p[1000] = {'\0'};

	if (n == 0)
	{
		_putchar('0');
	}
	while (n > 0)
	{
		p[i] = n % 2;
		n /= 2;
		i++;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(p[j] + '0');
		j--;
	}
}
