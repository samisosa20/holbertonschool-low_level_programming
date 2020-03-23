#include "lists.h"
/**
 * sum_listint - function that returns the
 * sum of all the data (n) of a listint_t linked list
 * @head: address.
 * Return: sum of nro.
 */
int sum_listint(listint_t *head)
{
	int nro = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		nro += head->n;
		head = head->next;
	}

	return (nro);
}
