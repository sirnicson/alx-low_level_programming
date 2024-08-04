# 0x12. C - Singly Linked Lists

## Project Overview
This project involves implementing a set of functions to manage singly linked lists in C. The tasks include printing list elements, determining the list length, adding nodes at the beginning or end of the list, and freeing the list.
Additionally, an assembly program is included to print a message using printf.

# Task Descriptions

0. Print List
Function: size_t print_list(const list_t *h);
Description: Prints all the elements of a list_t list.
Output: If str is NULL, it prints [0] (nil).
Returns: The number of nodes in the list.

1. List Length
Function: size_t list_len(const list_t *h);
Description: Returns the number of elements in a list_t list.

2. Add Node at the Beginning
Function: list_t *add_node(list_t **head, const char *str);
Description: Adds a new node at the beginning of a list_t list.
Returns: The address of the new element, or NULL if it failed.

3. Add Node at the End
Function: list_t *add_node_end(list_t **head, const char *str);
Description: Adds a new node at the end of a list_t list.
Returns: The address of the new element, or NULL if it failed.

4. Free List
Function: void free_list(list_t *head);
Description: Frees a list_t list.

5. Print Before Main
Function: Utilizes a constructor attribute to execute a print statement before the main function.
Output: Prints "You're beat! and yet, you must allow,\nI bore my house upon my back!\n".

6. Assembly Program
Description: Writes a 64-bit assembly program that prints "Hello, Holberton" using printf.
Compilation: The program is compiled using nasm and gcc
