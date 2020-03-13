#include "variadic_functions.h"
/**
 * print_strings - function that prints strings,
 * followed by a new line.
 * @separator: is the string to be printed
 * between strings.
 * @n: string to print
 * Return: none.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;
	char *str;

		va_start(valist, n);

		for (i = 0; i < n; i++)
		{
			str = va_arg(valist, char *);
			if (str != NULL)
			{
				printf("%s", str);
			}
			else
			{
				printf("(nil)");
			}
			if (separator != NULL && i < n - 1)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
		va_end(valist);

}
