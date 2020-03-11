#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: name to print UPPER.
 * @size: size of array.
 * @cmp: function pointer.
 * Return: Always 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && array)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if ((cmp)(array[i]) == 1)
				return (i);
	}
	return (-1);
}
