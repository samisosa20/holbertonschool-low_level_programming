#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: address
 * Return: Nro elements.
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}