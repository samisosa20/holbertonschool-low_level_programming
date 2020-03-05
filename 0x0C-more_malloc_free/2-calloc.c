#include "holberton.h"
#include <stdlib.h>
/**
  * _calloc - function that allocates memory for an array, using malloc.
  * @nmemb: frist pointer.
  * @size: second pointer.
  * Return: pointer.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	/*signed int i;*/
	void *a;

	if (size == 0 || nmemb == 0)
		return (NULL);
	a = malloc(size * nmemb);
	if (a == NULL)
		return (NULL);
	/*for (i = 0; i < (size * nmemb); i++)
		a[i] = '\0';*/
	return (a);
}
