#include "search_algos.h"
/**
 * linear_search - function that searches for a value
 * in an array of integers using the Linear search algorithm
 * @array: Pointer to the source array
 * @size: Length of the array
 * @value: Value to be found on the array
 * Return: Index where value is located, or -1 if error
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return -1;
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return i;
	}
	return -1;
}
