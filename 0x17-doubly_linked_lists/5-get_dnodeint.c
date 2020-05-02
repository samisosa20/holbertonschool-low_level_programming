#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list
 * @head: address list
 * @index: index
 * Return: position
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int iterate = 0;

	while (head != NULL)
	{
		if (iterate == index)
		{
			return (head);
		}
		iterate++;
		head = head->next;
	}
	/* all else, return NULL */
	return (NULL);
}
