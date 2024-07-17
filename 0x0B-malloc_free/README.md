## C Memory Management Tasks


This repository contains functions that demonstrate dynamic memory allocation and deallocation in C. Each function addresses a specific task related to handling arrays, strings, and 2D arrays using malloc and free.

# Tasks

0. Float like a butterfly, sting like a bee
Function: char *create_array(unsigned int size, char c);

Creates an array of chars, initialized with a specific char.
Returns NULL if size is 0.
Returns a pointer to the array, or NULL if allocation fails.

1. The woman who has no imagination has no wings
Function: char *_strdup(char *str);

Returns a pointer to a newly allocated space in memory containing a copy of the string str.
Returns NULL if str is NULL.
Returns a pointer to the duplicated string, or NULL if allocation fails.

2. He who is not courageous enough to take risks will accomplish nothing in life
Function: char *str_concat(char *s1, char *s2);

Concatenates two strings s1 and s2.
Returns a pointer to a newly allocated space containing the concatenated string.
Treats NULL strings as empty.
Returns NULL on failure.

3. If you even dream of beating me you'd better wake up and apologize
Function: int **alloc_grid(int width, int height);

Returns a pointer to a 2D array of integers, initialized to 0.
Returns NULL on failure.
Returns NULL if width or height is 0 or negative.

4. It's not bragging if you can back it up
Function: void free_grid(int **grid, int height);

Frees a 2D grid previously created by alloc_grid.

5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe
Function: char *argstostr(int ac, char **av);

Concatenates all arguments of the program into a single string, each followed by a newline.
Returns NULL if ac is 0 or av is NULL.
Returns a pointer to the new string, or NULL if allocation fails.

6. I will show you how great I am
Function: char **strtow(char *str);

Splits a string into words.
Returns a pointer to an array of strings (words).
Each word is null-terminated.
The last element of the array is NULL.
Words are separated by spaces.
Returns NULL if str is NULL or empty, or if the function fails.
