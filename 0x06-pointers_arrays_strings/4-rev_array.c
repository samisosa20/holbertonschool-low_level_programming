#include "holberton.h"

/**
* reverse_array - function that reverses the
* content of an array of integers.
* @a: pointer to reverse content.
* @n: length of pointer.
* Return: none.
*/
void reverse_array(int *a, int n)
{
	int i;
	int aux = 0;

	n--;
	for (i = 0 ; i != n - i ; i++)
	{
		aux = a[i];
		a[i] = a[n - i];
		a[n - i] = aux;
	}
}
