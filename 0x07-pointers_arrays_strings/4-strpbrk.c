#include "holberton.h"
/**
* _strpbrk - a function that searches
* a string for any of a set of bytes.
* @s: pointer that locate a character.
* @accept: pointer that content character.
* Return: pointer.
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0, t = 0;

	while (s[i] != '\0')
	{
		t = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				t = 1;
		}
		if (t == 1)
			return (s + i);
		i++;
	}
	return (NULL);
}
