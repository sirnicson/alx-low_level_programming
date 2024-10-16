#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: pointer to the hash table to be deleted.
 *
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *current;
    hash_node_t *temp;
    unsigned long int i;

    /* Check if the hash table is NULL */
    if (ht == NULL)
        return;

    /* Iterate through each index of the hash table */
    for (i = 0; i < ht->size; i++)
    {
        current = ht->array[i];

        /* Free each node in the linked list at this index */
        while (current != NULL)
        {
            temp = current;  /* Store the current node */
            current = current->next;  /* Move to the next node */
            free(temp->key);  /* Free the key string */
            free(temp->value);  /* Free the value string */
            free(temp);  /* Free the node itself */
        }
    }

    /* Free the array of pointers */
    free(ht->array);
    /* Free the hash table structure itself */
    free(ht);
}
