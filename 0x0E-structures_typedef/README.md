# C - Structures, Typedef

This repository includes exercises focused on C structures and the typedef keyword. The tasks cover defining and manipulating structures, as well as creating and managing custom data types.

## Tasks

0. Poppy
Task: Define a new type struct dog with the following elements:

name: A pointer to a character (char *).
age: A float representing the dog's age.
owner: A pointer to a character (char *).
This exercise demonstrates how to define a structure with different data types.

1. A Dog is the Only Thing on Earth That Loves You More Than You Love Yourself
Task: Write a function to initialize a variable of type struct dog.

Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

This function will set the values of name, age, and owner for a given struct dog variable. This task teaches how to set up and initialize structure variables.

2. A Dog Will Teach You Unconditional Love
Task: Write a function to print a struct dog.

Prototype: void print_dog(struct dog *d);

Format: Print each field of the struct dog. If an element is NULL, print (nil) instead. If the structure pointer d is NULL, print nothing.

This function helps with understanding how to access and display structure members, including handling NULL values.

3. Outside of a Dog, a Book is a Man's Best Friend
Task: Define a new type dog_t as an alias for struct dog.

This exercise introduces the use of typedef to create an alternative name for an existing structure type.

4. A Door is What a Dog is Perpetually on the Wrong Side Of
Task: Write a function that creates a new dog.

Prototype: dog_t *new_dog(char *name, float age, char *owner);

This function should allocate memory for a new dog_t, store a copy of name and owner, and initialize the age. It should return NULL if memory allocation fails.

This task illustrates dynamic memory allocation and copying strings.

5. How Many Legs Does a Dog Have If You Call His Tail a Leg?
Task: Write a function that frees memory allocated for dogs.

Prototype: void free_dog(dog_t *d);

This function will free any memory allocated for the dog_t structure and its members.

This task demonstrates memory management and deallocation in C.
