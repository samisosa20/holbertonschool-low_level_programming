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
	unsigned int dest_len = 0;
	unsigned int i;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	for (i = 0 ; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	return (dest);
}
