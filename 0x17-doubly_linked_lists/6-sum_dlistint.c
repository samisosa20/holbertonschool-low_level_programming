#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * @head: address list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}
