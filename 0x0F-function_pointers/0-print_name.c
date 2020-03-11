#include "function_pointers.h"
/**
 * print_name - check the code for Holberton School students.
 * @name: name to print UPPER.
 * @f: function pointer.
 * Return: none.
 */
void print_name(char *name, void (*f)(char *))
{
	if(name && f)
		(f)(name);
}
