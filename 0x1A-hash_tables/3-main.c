#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

void print_ht(hash_table_t *ht)
{
    unsigned int i = 0;
    unsigned int size;

    size = ht->size;
    for (i = 0; i < size; i++)
    {
        printf("%i ------ ", i);
        if (!ht->array[i])
            printf("NULL\n");
        else
        {
            printf("key: %s -- value: %s\n", ht->array[i]->key, ht->array[i]->value);
        }
    }
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "guttman");
    hash_table_set(ht, "betty", "holberton");
    print_ht(ht);
    return (EXIT_SUCCESS);
}
