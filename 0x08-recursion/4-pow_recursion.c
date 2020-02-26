#include "holberton.h"

/**
* _pow_recursion - function that returns
* the value of x raised to the power of y.
* @x: base of the pow.
* @y: pow
* Return: factorial number.
*/
int _pow_recursion(int x, int y)
{
	int i;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		i = _pow_recursion(x, y - 1);
		return (i * x);
	}
}
