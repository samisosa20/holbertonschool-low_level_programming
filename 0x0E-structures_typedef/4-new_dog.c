#include <stdlib.h>
#include "dog.h"

/**
* new_dog - function that prints a struct dog.
* @name: dog's name.
* @age: dog's age.
* @owner: dog's owner.
*
* Return: new dog.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int i, j, k;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	for (i = 0; name[i]; i++)
		;
	for (j = 0; owner[j]; j++)
		;

	p->name = malloc(i + 1);
	p->owner = malloc(j + 1);
	if (p->name == NULL || p->owner == NULL)
	{
		free(p->name);
		free(p->owner);
		free(p);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		p->name[k] = name[k];
	p->name[k] = '\0';
	for (k = 0; k < j; k++)
		p->owner[k] = owner[k];
	p->owner[k] = '\0';
	p->age = age;
	return (p);
}
