#include "holberton.h"
#include <stdlib.h>

/**
* string_nconcat - function that concatenates two strings.
* @s1: frist pointer.
* @s2: second pointer.
* @n: size of concat 2nd pointer.
* Return: pointer.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l;
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
	if (j > n)
		j = n;
	a = malloc((j + i + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (l = 0; l < i; l++)
		a[l] = s1[l];
	for (l = 0; l < j; l++)
		a[i + l] = s2[l];
	a[i + j] = '\0';
	return (a);
}
