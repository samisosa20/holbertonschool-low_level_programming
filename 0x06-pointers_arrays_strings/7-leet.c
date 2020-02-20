#include "holberton.h"

/**
* leet - function that encodes a string into 1337
* @a: pointer that encode into 1337.
* Return: upper pointer.
*/
char *leet(char *a)
{
	int i = 0, j = 0;
	char l1[10] = "aeotlAEOTL";
	char l2[10] = "4307143071";

	while (a[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == l1[j])
				a[i] = l2[j];
		}
		i++;
	}
	return (a);
}
