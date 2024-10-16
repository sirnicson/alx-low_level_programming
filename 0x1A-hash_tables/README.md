# Hash Tables in C

## Introduction
This project involves implementing hash tables using the C programming language. Hash tables are efficient data structures for storing and retrieving key-value pairs. In this project, we explore:

## Creating a hash table
- Implementing the djb2 hashing algorithm
- Adding and retrieving elements from the table
- Handling collisions using chaining
- Extending to sorted hash tables


## Requirements
- Ubuntu 20.04 LTS
- gcc compiler with -Wall -Werror -Wextra -pedantic -std=gnu89
- No global variables
- Maximum of 5 functions per file
- Code must adhere to the Betty style

## Data Structures

- Basic Hash Table:
```bash
typedef struct hash_node_s {
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s {
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;
```

- Sorted Hash Table:
```bash
typedef struct shash_node_s {
    char *key;
    char *value;
    struct shash_node_s *next;
    struct shash_node_s *sprev;
    struct shash_node_s *snext;
} shash_node_t;

typedef struct shash_table_s {
    unsigned long int size;
    shash_node_t **array;
    shash_node_t *shead;
    shash_node_t *stail;
} shash_table_t;
```

## Tasks
- Create a hash table.
- Implement a hash function using the djb2 algorithm.
- Add and retrieve elements from the table.
- Handle collisions using chaining.
- Implement sorted hash tables with linked list sorting.

## Compilation
Compile the program using:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hash_tables
```
