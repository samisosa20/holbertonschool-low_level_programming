#include "holberton.h"

/**
* _strlen - a function that returns the length of a string.
* @s: first integer.
*
* Return: return length of a string.
*/
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
