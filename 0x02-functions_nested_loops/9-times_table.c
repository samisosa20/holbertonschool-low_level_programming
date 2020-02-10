#include "holberton.h"

/**
* times_table - print the 9 table
*
* Return: Always 0.
*/
void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			/*_putchar(a + '0');*/
			c = a * b;
			if (c < 10)
			{
				_putchar(c  + '0');
				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			} else
			{
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
