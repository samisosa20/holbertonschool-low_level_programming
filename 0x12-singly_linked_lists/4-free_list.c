#include "lists.h"
/**
 * free_list - function that frees a list_t list
 * @head: address
 * Return: Nro elements.
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	while (head)
	{
		free(head);
		head = head->next;
	}
}