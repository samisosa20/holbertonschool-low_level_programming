#include "holberton.h"
/**
* _memcpy - that copies memory area
* @dest: pointer that set new values.
* @src: value to into the pointer.
* @n: max position to remplace.
* Return: pointer.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
