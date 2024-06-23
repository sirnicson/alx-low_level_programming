#include <stdio.h>

/**
 * main - Entry point of the program
 * ..............
 * Description: Prints alphabets in lower and uppercase,
 * Followed by a new line
 * ..............
 * Return: Always 0 (Success)
 */

int main(void)
{                                                                                         
	int ch;
	// Loop to print lowercase a-z
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	// Loops to print uppercase A-Z
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	// Followed by new line
		putchar('\n');

	// Return 0 from main = successful run
	return (0);
}
