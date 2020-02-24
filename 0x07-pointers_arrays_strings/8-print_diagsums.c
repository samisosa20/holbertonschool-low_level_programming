#include "holberton.h"
#include <stdio.h>
/**
* print_diagsums - function that prints the sum of
* the two diagonals of a square matrix of integers.
* @a: matriz to print.
* @size: size of the matriz
* Return: no return.
*/
void print_diagsums(int *a, int size)
{
	int i = 0, diag1 = 0, diag2 = 0;

	for (i = 0; i < size * size; i = i + (size + 1))
		diag1 += *(a + i);
	for (i = size - 1; i < size * size - 1; i = i + (size - 1))
		diag2 += *(a + i);
	printf("%i, %i\n", diag1, diag2);
}
