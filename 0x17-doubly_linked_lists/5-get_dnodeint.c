#include "lists.h"

/**
 * get_dnodeint_at_index -
 *
 * Return: 
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
