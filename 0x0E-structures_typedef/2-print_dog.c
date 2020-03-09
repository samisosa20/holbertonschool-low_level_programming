#include <stdio.h>
#include "dog.h"

/**
* print_dog - function that prints a struct dog.
* @d: struct dog.
*
* Return: no return.
*/
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age,
			(*d).owner);
}
