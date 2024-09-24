# Dynamic Libraries Project

## Overview

This project focuses on creating dynamic libraries in C, which are essential for efficient code sharing and memory management. Dynamic libraries allow multiple programs to share common code, reducing redundancy and improving maintainability.

## Libraries Created

1. **libdynamic.so**
   - This dynamic library contains the following functions:
     - `int _putchar(char c);`
     - `int _islower(int c);`
     - `int _isalpha(int c);`
     - `int _abs(int n);`
     - `int _isupper(int c);`
     - `int _isdigit(int c);`
     - `int _strlen(char *s);`
     - `void _puts(char *s);`
     - `char *_strcpy(char *dest, char *src);`
     - `int _atoi(char *s);`
     - `char *_strcat(char *dest, char *src);`
     - `char *_strncat(char *dest, char *src, int n);`
     - `char *_strncpy(char *dest, char *src, int n);`
     - `int _strcmp(char *s1, char *s2);`
     - `char *_memset(char *s, char b, unsigned int n);`
     - `char *_memcpy(char *dest, char *src, unsigned int n);`
     - `char *_strchr(char *s, char c);`
     - `unsigned int _strspn(char *s, char *accept);`
     - `char *_strpbrk(char *s, char *accept);`
     - `char *_strstr(char *haystack, char *needle);`

2. **liball.so**
   - This dynamic library is created using a script and includes all `.c` files in the current directory. It serves as a convenient collection of all functions provided in this project.

## Compilation

- All libraries are compiled on **Ubuntu 20.04 LTS** using the `gcc` compiler
