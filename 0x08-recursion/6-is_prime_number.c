#include "holberton.h"

/**
* _check_prime - evalua si es divisible por si
* mismo y el 1.
* @x: cont.
* @n: base to div.
* Return: if is div or not.
*/

int _check_prime(int x, int n)
{
	if (n % x == 0 || n < 2)
		return (0);
	else if (x == n - 1)
		return (1);
	else if (n > x)
		return (_check_prime(x + 1, n));
	return (1);
}

/**
* is_prime_number - function that returns 1 if
* the input integer is a prime number, otherwise return 0
* @n: number to sqrt.
* Return: sqrt number.
*/
int is_prime_number(int n)
{
	return (_check_prime(2, n));
}
