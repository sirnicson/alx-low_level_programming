## 0x14 - C - Bit Manipulation


# Objective

This project focuses on understanding and manipulating binary representations of numbers in C. You will implement functions to perform various bit manipulation tasks, which are crucial for low-level programming and understanding how data is stored and processed in computers.



# Tasks
0. Binary to Unsigned Integer
Prototype: unsigned int binary_to_uint(const char *b);
Description: Converts a binary number (represented as a string of '0' and '1') to an unsigned integer.
Return: The converted number or 0 if the string contains invalid characters or is NULL.

1. Print Binary Representation
Prototype: void print_binary(unsigned long int n);
Description: Prints the binary representation of a number without using arrays, malloc, %, or / operators.
Format: See examples in the task description.

2. Get Bit Value
Prototype: int get_bit(unsigned long int n, unsigned int index);
Description: Returns the value of a bit at a specified index (starting from 0).
Return: The value of the bit or -1 if an error occurs (e.g., index out of range).

3. Set Bit Value to 1
Prototype: int set_bit(unsigned long int *n, unsigned int index);
Description: Sets the value of a bit at a specified index to 1.
Return: 1 if successful, or -1 if an error occurs (e.g., invalid index).

4. Clear Bit Value to 0
Prototype: int clear_bit(unsigned long int *n, unsigned int index);
Description: Sets the value of a bit at a specified index to 0.
Return: 1 if successful, or -1 if an error occurs (e.g., invalid index).

5. Flip Bits
Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
Description: Calculates the number of bits needed to flip to convert one number to another.
Return: The number of bits to flip. No use of % or / operators is allowed.

6. Check Endianness
Prototype: int get_endianness(void);
Description: Determines the endianness of the system.
Return: 0 for big endian, 1 for little endian.

7. Password Extraction
Task: Find and save the password for this program.
File: Save the exact password in the file 101-password without extra spaces or new lines.
