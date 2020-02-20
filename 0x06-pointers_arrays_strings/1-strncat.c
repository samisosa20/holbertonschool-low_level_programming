#include "holberton.h"
#include <string.h>

/**
* _strncat - appends the src string to the dest string.
* @dest: pointer to the resulting string.
* @src: pointer append to dest.
* @n: bytes contains
* Return: pointer.
*/
char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len = strlen(dest);
	size_t i;
	size_t m = n;

	for (i = 0 ; i < m && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
