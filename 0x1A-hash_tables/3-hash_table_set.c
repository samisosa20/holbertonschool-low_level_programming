#include "hash_tables.h"

/**
 * hash_table_set -
 *
 * Return: 
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new;
    unsigned long int index, i;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

    index = key_index((const unsigned char *)key, ht->size);
    for (i = index; ht->array[i]; i++)
    {
        if (strcmp(ht->array[i]->key, key) == 0)
        {
			ht->array[i]->value = (char *)value;
			return (1);
        }
    }

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = (char *)key;
	new->value = (char *)value;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}