#include "holberton.h"
#include <stdio.h>

/**
* print_array - hat prints n elements of an
* array of integers, followed by a new line.
* @a: pointer.
* @n: size array
* Return: null.
*/
void print_array(int *a, int n)
{
	int b = 0;

	for (;b < n; b++)
	{
		if (b == 0)
			printf("%d", a[b]);
		else
			printf(" ,%d", a[b]);
	}
	printf("\n");
}
