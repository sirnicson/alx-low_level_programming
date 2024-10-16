#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table to add or update the key/value to.
 * @key: the key, which cannot be an empty string.
 * @value: the value associated with the key, which must be duplicated.
 *
 * Return: 1 if succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node;
    unsigned long int index;

    /* Check for valid hash table and key */
    if (ht == NULL || key == NULL || strlen(key) == 0)
        return (0);

    /* Create a new node */
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (0);

    /* Duplicate the key and value */
    new_node->key = strdup(key);
    new_node->value = strdup(value);
    if (new_node->key == NULL || new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node->value);
        free(new_node);
        return (0);
    }

    /* Get the index for the key */
    index = key_index((const unsigned char *)key, ht->size);

    /* Handle collisions by adding to the beginning of the list */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);  /* Successfully added the key/value pair */
}
