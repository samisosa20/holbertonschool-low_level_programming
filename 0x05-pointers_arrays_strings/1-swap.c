#include "holberton.h"

/**
* swap_int - swaps the values of two integers.
* @a: first integer.
* @b: Second integer.
*
* Return: return 98.
*/
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
