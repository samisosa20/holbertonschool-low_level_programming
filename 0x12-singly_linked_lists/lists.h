#ifndef LIST_H_
#define LIST_H_
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct lista - singly linked list
 * @len: integer
 * @next: points to the next node
 * @str: string
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct lista
{
	char *str;
	int len;
	struct lista *next;
} list_t;

size_t print_list(const list_t *h);
int _putchar(char c);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
