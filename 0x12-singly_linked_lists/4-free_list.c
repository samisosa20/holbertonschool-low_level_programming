#include "lists.h"
/**
 * free_list - function that frees a list_t list
 * @head: address
 * Return: Nro elements.
 */
void free_list(list_t *head)
{
	list_t *aux;

	aux = head;
	while (aux != NULL)
	{
		if (aux->str != NULL)
			free(aux->str);
		free(aux);
		aux = aux->next;
	}
}
