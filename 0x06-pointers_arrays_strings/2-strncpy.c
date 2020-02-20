#include "holberton.h"
#include <string.h>

/**
* _strncpy - function that copies a string.
* @dest: pointer to the resulting string.
* @src: pointer copy to dest.
* @n: bytes contains
* Return: pointer.
*/
char *_strncpy(char *dest, char *src, int n)

{
	size_t i;
	size_t m = n;

	for (i = 0; i < m && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < m; i++)
		dest[i] = '\0';

	return (dest);
}
