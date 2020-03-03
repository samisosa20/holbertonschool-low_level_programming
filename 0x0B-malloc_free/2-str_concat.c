#include "holberton.h"
#include <stdlib.h>
/**
* str_concat - function that concatenates two strings.
* @s1: pointer
* @s2: pointer to concat
* Return: array.
*/
char *str_concat(char *s1, char *s2)
{
	int i, j, l;
	char *a;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	a = malloc((j + i + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (l = 0; l < i; i++)
		a[l] = s1[l];
	for (l = 0; l < j; j++)
		a[i + l] = s2[l];
	a[i + j] = '\0';
	return (a);
}
