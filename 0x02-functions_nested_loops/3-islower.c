#include "holberton.h"

/**
* _islower - evaluate if the letter is lowercase and type 0 else type 1.
* @c: letter to evaluate.
* Return: Always 0.
*/

int _islower(int c)
{
	if (c >= 65 && c <= 90)
		return (0);
	else
		return (1);
}
