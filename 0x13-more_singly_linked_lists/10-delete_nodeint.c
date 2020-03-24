#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the
 * node at index index of a listint_t linked list
 * @head: address.
 * @index: index.
 * Return: 1 if is success or -1 if not.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *aux = *head;
	listint_t *new;

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
