#include "holberton.h"
/**
* _memset - function fills the first n bytes of
* the memory area pointed to by s with the constant byte b.
* @s: pointer that set new values.
* @b: value to into the pointer.
* @n: max position to remplace.
* Return: pointer.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int dest_len = 0;
	unsigned int i;

	while (s[dest_len] != '\0')
	{
		dest_len++;
	}

	for (i = 0 ; i < n; i++)
		s[dest_len + i] = b;

	return (s);
}
