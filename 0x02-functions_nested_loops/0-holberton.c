#include "holberton.h"

/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
int main(void)
{
	char name[9] = "Holberton";
	int x;

	for (x = 0; x < 9; x++)
	{
		_putchar(name[x]);
	}
	_putchar('\n');
	return (0);
}
