#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * index of a dlistint_t linked list.
 * @head: address list
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *aux = *head;
	dlistint_t *new;

	if (!aux)
		return (-1);
	while (*head && index)
	{
		if (!aux)
			return (-1);
		if (i == index - 1)
			break;
		aux = aux->next;
		++i;
	}
	if (index)
	{
		new = aux->next->next;
		free(aux->next);
		aux->next = new;
	}
	else
	{
		*head = (*head)->next;
		free(aux);
	}
	return (1);
}
