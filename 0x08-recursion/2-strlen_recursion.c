#include "holberton.h"

/**
* _strlen_recursion - function that returns the length of a string.
* @s:  pointer to print.
* Return: length of a string.
*/
int _strlen_recursion(char *s)
{
	int i;

	if (*s != '\0')
	{
		i = _strlen_recursion(s + 1);
		return (i + 1);
	}
	else
		return (0);
}
