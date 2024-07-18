# C - More malloc, free

## Objective
This project contains several C functions that demonstrate the use of dynamic memory allocation (malloc, calloc, realloc) and error handling in C programming.

### Tasks

0. Trust no one
Function: malloc_checked
Prototype: void *malloc_checked(unsigned int b);
Description: Allocates memory using malloc. Terminates the program with status 98 if malloc fails.

1. string_nconcat
Function: string_nconcat
Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
Description: Concatenates two strings. Returns a pointer to a newly allocated space containing s1 followed by the first n bytes of s2.

2. calloc
Function: _calloc
Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
Description: Allocates memory for an array using calloc. Initializes memory to zero. Returns NULL if nmemb or size is 0, or if malloc fails.

3. array_range
Function: array_range
Prototype: int *array_range(int min, int max);
Description: Creates an array of integers containing values from min to max. Returns NULL if min > max or if malloc fails.

4. realloc
Function: _realloc
Prototype: void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
Description: Reallocates a memory block using realloc. Copies contents to the new memory block and frees ptr when necessary.

5. We must accept finite disappointment, but never lose infinite hope
Program: 101-mul
Usage: mul num1 num2
Description: Multiplies two positive numbers provided as arguments. Prints the result. Handles errors for incorrect number of arguments or non-digit inputs.
