#include "variadic_functions.h"
/**
 * print_all - function that prints strings,
 * followed by a new line.
 * @format: string to print
 * Return: none.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	va_list args;

	va_start(args, format);
	while (format == NULL)
	{	printf("\n");
		return;
	}
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", (char)va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", (float)va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char*);
			if (str != NULL)
			{	printf("%s", str);
			break;
			}
			printf("(nil)");
			break;
		}
	if ((format[i] == 'c' || format[i] == 'i' ||
	format[i] == 'f' || format[i] == 's') && (format[i + 1] != '\0'))
		printf(", ");
		i++;
	}
	printf("\n");

	va_end(args);
}
