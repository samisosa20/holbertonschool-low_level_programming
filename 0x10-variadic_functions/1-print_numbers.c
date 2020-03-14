#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers,
 * followed by a new line.
 * @separator: is the string to be printed
 * between numbers.
 * @n: number to print
 * Return: none.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(valist);
}
