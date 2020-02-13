#include "holberton.h"

/**
* more_numbers - print number 0 to 14, 10 times.
*
* Return: Always 0.
*/
void more_numbers(void)
{
	int a = 0, b;

	for (; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
				_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
