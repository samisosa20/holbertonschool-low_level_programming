#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the
 * nth node of a listint_t linked list
 * @head: address.
 * @index: index.
 * Return: Nro elements.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nro = 0;

	if (head == NULL)
		return (0);

	while (nro < index)
	{
		head = head->next;
		nro++;
	}
	if (head->next == NULL)
		return (NULL);
	return (head);
}
