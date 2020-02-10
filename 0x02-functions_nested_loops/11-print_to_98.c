#include "holberton.h"
#include <stdio.h>

/**
* print_to_98 - hat prints all natural numbers from n to 98 and new line.
* @n: start in the number.
* Return: Always 0.
*/
void print_to_98(int n)
{
	int x;

	if (n <= 98)
	{
		for (x = n; x <= 98; x++)
		{
			if (x < 98)
				printf("%d, ", x);
			else
				printf("%d", x);
		}
		printf("\n");
	} else
	{
		for (x = n; x >= 98; x--)
		{
			if (x > 98)
				printf("%d, ", x);
			else
				printf("%d", x);
		}
		printf("\n");
	}
}
