#include "holberton.h"

/**
* leet - function that encodes a string into 1337
* @a: pointer that encode into 1337.
* Return: upper pointer.
*/
char *leet(char *a)
{
	int i = 0, aux = 0;

	while (a[i] != '\0')
	{
		if ((a[i] >= 9 && a[i] <= 11) || (a[i] >= 32 && a[i] <= 34))
			aux = 1;
		else if (a[i] == 40 || a[i] == 41 || a[i] == 59 || a[i] == 63)
			aux = 1;
		else if (a[i] == 123 || a[i] == 125 || a[i] == 46)
			aux = 1;
		else
		{
			if (aux == 1)
			{
				if (a[i] - 32 >= 65 && a[i] - 32 <= 90)
				{
					a[i] = a[i] - 32;
				}
			}
			aux = 0;
		}
		i++;
	}
	return (a);
}
