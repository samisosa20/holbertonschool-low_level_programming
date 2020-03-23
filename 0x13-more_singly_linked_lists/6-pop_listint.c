#include "lists.h"
/**
 * pop_listint - function that deletes the head node
 * of a listint_t linked list, and returns the head
 * node’s data (n).
 * @head: address
 * Return: Nro elements.
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int nro;

	if (*head == NULL)
		return (0);

	nro = (*head)->n;
	aux = (*head)->next;
	free(*head);
	*head = aux;

	return (nro);
}
