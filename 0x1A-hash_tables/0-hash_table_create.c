#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the array.
 *
 * Return: a pointer to the newly created hash table,
 *         or NULL if it fails.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_table;
    unsigned long int i;

    /* Check for invalid size */
    if (size == 0)
        return (NULL);

    /* Allocate memory for the hash table structure */
    hash_table = malloc(sizeof(hash_table_t));
    if (hash_table == NULL)
        return (NULL);  /* Return NULL if allocation fails */

    /* Allocate memory for the array of pointers */
    hash_table->array = malloc(sizeof(hash_node_t *) * size);
    if (hash_table->array == NULL)
    {
        free(hash_table);  /* Free previously allocated memory for hash_table */
        return (NULL);  /* Return NULL if allocation fails */
    }

    /* Initialize each element of the array to NULL */
    for (i = 0; i < size; i++)
        hash_table->array[i] = NULL;

    /* Set the size of the hash table */
    hash_table->size = size;

    return (hash_table);  /* Return the created hash table */
}

