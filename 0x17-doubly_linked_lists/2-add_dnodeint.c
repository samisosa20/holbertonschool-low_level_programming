#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at
 * the beginning of a dlistint_t list.
 * @head: address
 * @n: number to save
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *aux;

	aux = malloc(sizeof(dlistint_t));

	if (aux == NULL)
		return (NULL);

	aux->n = n;
	aux->next = NULL;
	aux->prev = NULL;
	if (*head)
	{
		aux->next = *head;
		(*head)->prev = aux;
		*head = aux;
		return (aux);
	}
	*head = aux;
	return (*head);
}
