#include "lists.h"
/**
 * free_listint_safe - Prints a linked list
 * @h: Pointer to address of a list
 * Return: Size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t c = 0;
	listint_t *aux;

	while (*h && *h > (*h)->next)
	{
		aux = (*h)->next;
		free(*h);
		*h = aux;
		++c;
	}
	if (*h)
	{
		free(*h);
		++c;
	}
	*h = NULL;
	return (c);
}
