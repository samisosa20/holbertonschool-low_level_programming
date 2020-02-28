#include "holberton.h"

/**
* _isdigit - evaluate if the variable is a digit or not.
* @c: input variable.
* Return: Always 0.
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
