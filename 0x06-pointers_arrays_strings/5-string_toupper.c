#include "holberton.h"

/**
* string_toupper - function that changes all lowercase
* letters of a string to uppercase.
* @a: pointer to change to uppercase.
* Return: upper pointer.
*/
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] - 32 >= 65 && a[i] - 32 <= 90)
			a[i] = a[i] - 32;
		i++;
	}
	return (a);
}
