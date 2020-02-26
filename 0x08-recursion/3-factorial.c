#include "holberton.h"

/**
* factorial - function that returns the factorial of a given number.
* @n: number factorial.
* Return: factorial number.
*/
int factorial(int n)
{
	int i;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		i = factorial(n - 1);
		return (i * n);
	}
}
