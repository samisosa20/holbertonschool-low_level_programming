#include "holberton.h"

/**
* get_bit - function that returns the value
* of a bit at a given index
* @n: The input number
* @index: index
* Return: the value of a bit.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits;

	bits = (n >> index) & 1;

	if ((bits == 1) || (bits == 0))
		return (bits);
	else
		return (-1);
}
