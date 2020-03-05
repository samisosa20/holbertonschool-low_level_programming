#include "holberton.h"
#include <stdlib.h>

/**
* malloc_checked - function that allocates memory using malloc.
* @b: size of pointer.
* Return: Always adress.
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
