# 0x13. C - More Singly Linked Lists

This project focuses on the manipulation of singly linked lists in C. The objective is to implement various operations on singly linked lists, such as adding, removing, and manipulating nodes. This project is designed to enhance understanding of linked list data structures and memory management in C.


## Project Tasks

0. Print List
Objective: Implement a function to print all elements of a listint_t list.
Prototype: size_t print_listint(const listint_t *h);
Return: The number of nodes.

1. List Length
Objective: Implement a function to return the number of elements in a listint_t list.
Prototype: size_t listint_len(const listint_t *h);

2. Add Node
Objective: Implement a function to add a new node at the beginning of a listint_t list.
Prototype: listint_t *add_nodeint(listint_t **head, const int n);
Return: The address of the new element, or NULL if it failed.

3. Add Node at the End
Objective: Implement a function to add a new node at the end of a listint_t list.
Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
Return: The address of the new element, or NULL if it failed.

4. Free List
Objective: Implement a function to free a listint_t list.
Prototype: void free_listint(listint_t *head);

5. Free
Objective: Implement a function to free a listint_t list and set the head to NULL.
Prototype: void free_listint2(listint_t **head);

6. Pop
Objective: Implement a function to delete the head node of a listint_t linked list and return the head node’s data.
Prototype: int pop_listint(listint_t **head);
Return: Head node’s data, or 0 if the linked list is empty.

7. Get Node at Index
Objective: Implement a function to return the nth node of a listint_t linked list.
Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
Return: The nth node, or NULL if the node does not exist.

8. Sum List
Objective: Implement a function to return the sum of all data in a listint_t linked list.
Prototype: int sum_listint(listint_t *head);
Return: Sum of all data, or 0 if the list is empty.

9. Insert
Objective: Implement a function to insert a new node at a given position in a listint_t linked list.
Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
Return: The address of the new node, or NULL if it failed.

10. Delete at Index
Objective: Implement a function to delete the node at a specific index of a listint_t linked list.
Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
Return: 1 if it succeeded, -1 if it failed.

11. Reverse List
Objective: Implement a function to reverse a listint_t linked list.
Prototype: listint_t *reverse_listint(listint_t **head);
Return: A pointer to the first node of the reversed list.

12. Print (Safe Version)
Objective: Implement a function to print a listint_t linked list safely, handling loops.
Prototype: size_t print_listint_safe(const listint_t *head);
Return: The number of nodes in the list.

13. Free (Safe Version)
Objective: Implement a function to free a listint_t list safely, handling loops.
Prototype: size_t free_listint_safe(listint_t **h);
Return: The size of the list that was freed.

14. Find the Loop
Objective: Implement a function to find the loop in a listint_t linked list.
Prototype: listint_t *find_listint_loop(listint_t *head);
Return: The address of the node where the loop starts, or NULL if there is no loop.
This project is an opportunity to practice and refine skills in dynamic memory management, pointer manipulation, and understanding linked list operations in C.
