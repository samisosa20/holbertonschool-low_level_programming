#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new
 * node at a given position
 * @head: address.
 * @idx: index.
 * @n: nro to add.
 * Return: Nro elements.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *aux = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	while (*head && idx)
	{
		if (!aux)
			return (NULL);
		if (i == idx - 1)
			break;
		aux = aux->next;
		++i;
	}
	new->n = n;
	if (idx)
	{
		new->next = aux->next;
		aux->next = new;
	}
	else
	{
		new->next = aux;
		*head = new;
	}
	return (new);
}
