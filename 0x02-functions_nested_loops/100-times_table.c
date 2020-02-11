#include "holberton.h"

/**
* print_times_table - print x table
* @n: number of the table
* Return: Always 0.
*/
void print_times_table(int n)
{
	int a, b, c;

	if (n > 0 && n < 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				/*_putchar(a + '0');*/
				c = a * b;
				if (c < 10)
				{
					if (b != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(c + '0');
				}
				else if (c < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(c / 10 + '0');
					_putchar(c % 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(c / 100 + '0');
					_putchar((c / 10) % 10 + '0');
					_putchar(c % 10 + '0');
				}
				if (b != n)
					_putchar(',');
				else
					_putchar('\n');
			}
		}
	}
}
