#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: pointer to the hash table to be printed.
 *
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
    hash_node_t *current;
    unsigned long int i;
    int is_first = 1;  /* Flag to handle comma formatting */

    /* Check if the hash table is NULL */
    if (ht == NULL)
        return;

    /* Start printing the hash table */
    printf("{");

    /* Iterate through the array of the hash table */
    for (i = 0; i < ht->size; i++)
    {
        current = ht->array[i];

        /* Iterate through the linked list at this index */
        while (current != NULL)
        {
            if (!is_first)
                printf(", ");  /* Print a comma before subsequent key/value pairs */

            /* Print the key/value pair */
            printf("'%s': '%s'", current->key, current->value);
            is_first = 0;  /* Set the flag to false after the first element */
            current = current->next;  /* Move to the next node */
        }
    }

    printf("}\n");  /* End the printed hash table with a closing brace */
}
