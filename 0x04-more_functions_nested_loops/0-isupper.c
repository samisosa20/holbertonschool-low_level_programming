#include "holberton.h"

/**
* _isupper - evaluate if the letter is upper or not.
* @c: input letter.
* Return: Always 0.
*/
int _isupper(int c)
{
	if (c >= 97 && c <= 122)
		return (0);
	else
		return (1);
}
