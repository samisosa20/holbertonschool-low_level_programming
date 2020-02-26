#include "holberton.h"

/**
* _check - evaluate if x is sqrt to n.
* @x: cont.
* @n: base to sqrt.
* Return: sqrt number.
*/

int _check(int x, int n)
{
	if (x * x == n)
		return (x);
	else if (x * x > n)
		return (-1);
	else
		return (_check(x + 1, n));
}

/**
* _sqrt_recursion - function that returns
* the natural square root of a number.
* @n: number to sqrt.
* Return: sqrt number.
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_check(1, n));
	}
}
