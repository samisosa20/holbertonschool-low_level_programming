#include "variadic_functions.h"
/**
 * sum_them_all - check the code for Holberton School students.
 * @n: sum the n numbers.
 * Return: result to the add.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list valist;

	if (n == 0)
		return (0);
	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, unsigned int);
	}
	va_end(valist);

	return (sum);
}
