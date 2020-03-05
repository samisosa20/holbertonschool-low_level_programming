#include "holberton.h"
#include <stdlib.h>

/**
* array_range - function that creates an array of integers.
* @min: min number.
* @max: max number.
* Return: pointer.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *a;
	char *aux, *aux_a;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		a = malloc(new_size);
		if (a == NULL)
			return (NULL);
		return (a);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	aux = ptr;
	a = malloc(sizeof(aux) * new_size);
	if(a == NULL)
	{
		free(ptr);
		return (NULL);
	}
	aux_a = a;
	for (i = 0; i < old_size && i < new_size; i++, aux++)
		aux_a[i] = *aux;
	free(ptr);
	return (a);
}
