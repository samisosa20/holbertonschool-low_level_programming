#include "holberton.h"

/**
* _strncat - appends the src string to the dest string.
* @dest: pointer to the resulting string.
* @src: pointer append to dest.
* @n: bytes contains
* Return: pointer.
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
