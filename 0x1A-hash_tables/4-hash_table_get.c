#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: pointer to the hash table.
 * @key: the key to search for.
 *
 * Return: the value associated with the element,
 *         or NULL if the key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    hash_node_t *current;
    unsigned long int index;

    /* Check for NULL hash table or empty key */
    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);

    /* Get the index of the key */
    index = key_index((const unsigned char *)key, ht->size);

    /* Retrieve the linked list at that index */
    current = ht->array[index];

    /* Iterate through the linked list to find the key */
    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)  /* Check if keys match */
            return (current->value);  /* Return the value if found */
        current = current->next;  /* Move to the next node */
    }

    return (NULL);  /* Return NULL if key is not found */
}
