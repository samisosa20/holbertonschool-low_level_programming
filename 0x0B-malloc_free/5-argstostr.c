#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* argstostr - main entry
* @ac: int input
* @av: double pointer array
* Return: 0
*/
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, leng = 0;
	char *a;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			leng++;
	}
	leng += ac;

	a = malloc(sizeof(char) * leng + 1);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			a[k] = av[i][j];
			k++;
		}
		if (a[k] == '\0')
		{
			a[k++] = '\n';
		}
	}
	return (a);
}
