#include "lists.h"
/**
 * listint_len - function that returns the
 * number of elements in a linked listint_t list.
 * @h: structure
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
