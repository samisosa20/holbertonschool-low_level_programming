#include "lists.h"

/**
 * sum_dlistint -
 *
 * Return: 
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
