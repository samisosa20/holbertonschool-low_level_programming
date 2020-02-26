#include "holberton.h"

/**
* _length - what is the length of the string.
* @s: pointer to search the length.
* Return: length.
*/

int _length(char *s)
{
	if (*s != '\0')
	{
		return (1 + _length(s + 1));
	}
	else
	{
		return (0);
	}
}

/**
* _compare - compare the first character
* with the last character.
* @s: pointer with the word.
* @ini: first character.
* @len: last character.
* Return: if is palondrome or not.
*/

int _compare(char *s, int ini, int len)
{
	if (ini < len)
	{
		if (s[ini] == s[len])
			return (_compare(s, ini + 1, len - 1));
		else
			return (0);
	}
	else
	{
		return (1);
	}
}


/**
* is_palindrome - function that returns 1
* if a string is a palindrome and 0 if not.
* @s: pointer.
* Return: if is palindrome or not.
*/
int is_palindrome(char *s)
{
	int len;

	if (s != '\0')
	{
		len = _length(s);
		return (_compare(s, 0, len - 1));
	}
	else
	{
		return (1);
	}
}
