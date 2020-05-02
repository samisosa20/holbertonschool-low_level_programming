#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a
 * new node at a given position.
 * @h: address list
 * @idx: index
 * @n: value to insert
 * Return: list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	unsigned int iterate = 0;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL || h == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	/* if index is head, then, set new node as head */
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	/* if next node is not NULL & points to the node before insertion */
	/* if pointer is at the node before insertion */
	while ((iterate <= (idx - 1)) && (current != NULL))
	{
		if ((current->next == NULL) && (iterate == (idx - 1)))
		{
			new = add_dnodeint_end(h, n);
			return (new);
		}
		if (iterate == (idx - 1))
		{
			new->prev = current;
			new->next = current->next;
			current->next->prev = new;
			current->next = new;
			return (new);
		}
		current = current->next;
		iterate++;
	}
	free(new);
	return (NULL);
}
