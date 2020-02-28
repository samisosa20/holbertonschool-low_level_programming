#include "holberton.h"

/**
* _islower - evaluate if the letter is lowercase and type 0 else type 1.
* @c: letter to evaluate.
* Return: Always 0.
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
