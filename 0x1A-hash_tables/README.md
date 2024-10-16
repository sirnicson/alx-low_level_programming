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

## Files
- *0-hash_table_create.c:* Function to create a hash table.
- *1-djb2.c:* djb2 hash function.
- *2-key_index.c:* Function to return the index of a key.
- *3-hash_table_set.c:* Function to add an element to the hash table.
- *4-hash_table_get.c:* Function to retrieve a value by key.
- *5-hash_table_print.c:* Function to print the hash table.
- *6-hash_table_delete.c:* Function to delete the hash table.

## Individual Compilation
Each program file was compiled and tested againt a test file as shown below:
Example - Task 0:
- Function file:- 0-hash_table_create.c
- Test file :- 0-main.c
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -I. test_files/0-main.c 0-hash_table_create.c -o a
```

## Individual Test Usage
Task 0 function  program was run as follows:
```bash
./a
```
