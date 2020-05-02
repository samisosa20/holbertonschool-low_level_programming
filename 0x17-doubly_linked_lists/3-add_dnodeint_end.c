#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node
 * at the end of a dlistint_t list.
 * @head: address
 * @n: number to save
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	new->prev = temp;
	temp->next = new;
	new->next = NULL;
	return (new);
}
