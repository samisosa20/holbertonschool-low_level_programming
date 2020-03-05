#include "holberton.h"
#include <stdlib.h>

/**
* _realloc - function that reallocates a memory
* block using malloc and free.
* @ptr: pointer.
* @old_size: old size.
* @new_size: new size.
* Return: pointer void.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *a, *aux_ptr;

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

	a = malloc(new_size);
	if (a == NULL)
	{
		free(ptr);
		return (NULL);
	}

	aux_ptr = ptr;
	for (i = 0; i < old_size && i < new_size; i++, aux_ptr++)
		a[i] = *aux_ptr;
	free(ptr);
	return (a);
}
