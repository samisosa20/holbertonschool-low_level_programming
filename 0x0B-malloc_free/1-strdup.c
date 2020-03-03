#include "holberton.h"
#include <stdlib.h>
/**
* _strdup - function that returns a pointer to a newly
* allocated space in memory, which contains a copy of
* the string given as a parameter.
* @str: pointer
*
* Return: array.
*/
char *_strdup(char *str)
{
	unsigned int i, j;
	char *a;

	if (str == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		;
	j++;
	a = malloc(j * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		a[i] = str[i];
	return (a);
}
