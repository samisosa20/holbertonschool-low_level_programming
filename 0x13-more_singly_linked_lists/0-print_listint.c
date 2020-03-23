#include "lists.h"
/**
 * print_listint - function that prints all
 * the elements of a listint_t list.
 * @h: structure
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		printf("0\n");
		return (0);
	}

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
