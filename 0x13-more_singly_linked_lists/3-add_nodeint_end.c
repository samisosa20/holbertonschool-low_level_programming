#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list
 * @head: address
 * @n: pointer to insert
 * Return: address.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *old = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (*head);
	}
	while (old->next)
		old = old->next;
	old->next = new;
	return (new);
}
