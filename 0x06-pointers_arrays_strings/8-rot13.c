#include "holberton.h"

/**
* rot13 - function that encodes a string into root13
* @a: pointer that encode into root13.
* Return: upper pointer.
*/
char *rot13(char *a)
{
	int i = 0, j = 0;
	char l1[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char l2[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == l1[j])
			{
				a[i] = l2[j];
				break;
			}
		}
	}
	return (a);
}
