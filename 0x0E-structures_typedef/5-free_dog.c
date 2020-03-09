#include <stdlib.h>
#include "dog.h"

/**
* free_dog - function that frees dogs.
* @d: struct dog.
*
* Return: no return.
*/
void free_dog(struct dog *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
