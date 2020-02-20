#include "holberton.h"

/**
* cap_string - function that capitalizes all words of a string
* @a: pointer to change to uppercase.
* Return: upper pointer.
*/
char *cap_string(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (i == 0)
		{
			if (a[i] >= 'a' && a[i] <= 'z')
				a[i] = a[i] - 32;

		}
		else
		{
			if ((a[i - 1] >= 9 && a[i - 1] <= 11) || (a[i - 1] >= 32 &&
						a[i - 1] <= 34) || a[i - 1] == 40 || a[i - 1] == 41 ||
					a[i - 1] == 59 || a[i - 1] == 63 ||
					a[i - 1] == 123 || a[i - 1] == 125 || a[i - 1] == 46 || a[i - 1] == 44)
			{
				if (a[i] - 32 >= 65 && a[i] - 32 <= 90)
					a[i] = a[i] - 32;
			}
		}
		i++;
	}
	return (a);
}
