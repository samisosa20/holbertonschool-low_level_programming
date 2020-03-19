#include "lists.h"
/**
* _strlen - a function that returns the length of a string.
* @s: first integer.
*
* Return: return length of a string.
*/
int _strlen(const char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
/**
 * add_node_end -  a function that adds a
 * new node at the end of a list_t list.
 * @head: address
 * @str: pointer to insert
 * Return: Nro elements.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;

	return (new);
}
