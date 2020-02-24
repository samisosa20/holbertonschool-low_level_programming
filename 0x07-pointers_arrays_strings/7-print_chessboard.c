#include "holberton.h"

/**
* print_chessboard - a function that print the chessboard
* @a: matriz to print.
* Return: no return.
*/
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
