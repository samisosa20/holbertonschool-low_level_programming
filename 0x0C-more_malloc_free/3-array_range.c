#include "holberton.h"
#include <stdlib.h>

/**
* array_range - function that creates an array of integers.
* @min: min number.
* @max: max number.
* Return: pointer.
*/
int *array_range(int min, int max)
{
	int i, comp;
	int *a;

	if (min > max)
		return (NULL);
	comp = max - min + 1;
	a = malloc(comp * sizeof(int));
	if (a == NULL)
		return (NULL);
	for (i = 0; i <= comp; i++, min++)
		a[i] = min;
	return (a);
}
