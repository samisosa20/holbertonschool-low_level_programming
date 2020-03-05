#include "holberton.h"
#include <stdlib.h>

/**
* _calloc - function that allocates memory for an array, using malloc.
* @nmeb: frist pointer.
* @size: second pointer.
* Return: pointer.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);
	a = malloc(size * nmemb);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = nmemb;
	return (a);
}
