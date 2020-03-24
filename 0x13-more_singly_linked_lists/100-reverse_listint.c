#include "lists.h"
/**
 * reverse_listint - function that reverses
 * a listint_t linked list
 * @head: address
 * Return: address.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *aux = *head;
	listint_t *new = *head;

	*head = NULL;
	while (new)
	{
		aux = aux->next;
		new->next = *head;
		*head = new;
		new = aux;
	}
	return (*head);
}
