#include "holberton.h"
#include <stdio.h>
/**
* print_chessboard - a function that print the chessboard
* @a: matriz to print.
* Return: no return.
*/
void print_diagsums(int *a, int size)
{
	int i = 0, diag1 = 0, diag2 = 0;

	for(i = 0; i < size * size; i = i + (size + 1))
		diag1 += *(a + i);
	for (i = size - 1; i < size * size -1; i = i + (size - 1))
		diag2 += *(a + i);
	printf("%i, %i\n", diag1, diag2);
}
