#include "holberton.h"

/**
* rev_string -  function that reverses a string.
* @s: string.
*
* Return: null.
*/
void rev_string(char *s)
{
	int x = 0;
	int i = 0;
	char b;

	while (s[x] != '\0')
		x++;
	x = x - 1;
	while (x > 0)
	{
		b = s[i];
		s[i] = s[x];
		s[x] = b;
		x--;
		i++;
	}
}
