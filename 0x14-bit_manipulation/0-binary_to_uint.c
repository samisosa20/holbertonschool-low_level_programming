#include "holberton.h"

/**
 * binary_to_uint - function that converts
 * a binary number to an unsigned int.
 * @b: binary to convert
 * Return: number base 10.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, i = 0, j = 0, nro_int, rem;

	while (b[j])
	{
		if (isdigit(b[j]) == 0)
			return ('\0');
		j++;
	}
	nro_int = atoi(b);
	while (nro_int != 0)
	{
		rem = nro_int % 10;
		nro_int /= 10;
		dec += rem * pow(2, i);
		i++;
	}
	return (dec);
}
