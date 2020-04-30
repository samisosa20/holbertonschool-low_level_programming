#include "lists.h"

/**
 * free_dlistint - function that free a dlistint_t list.
 * @head: address
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	aux = head;
	while (aux != NULL)
	{
		free(aux);
		aux = aux->next;
	}
}