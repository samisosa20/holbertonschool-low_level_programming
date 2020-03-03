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
	unsigned int i, j;
	char *a;

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	i++;
	j++;
	a = malloc((j + i) * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		a[i] = s1[i];
	for (j = 0; s2[j]; j++)
		a[i + j] = s2[j];
	a[i + j] = '\0';
	return (a);
}
