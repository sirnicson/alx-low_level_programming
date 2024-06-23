#include <stdio.h>


/**
 * main - Entry of the program
 * ...
 * Description: Print alphabets in  lowercase and in reverse
 * Followed by a new line
 * ...
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch; /* Declare variable ch of type char */	
	for (ch = 'z'; ch >= 'a'; ch--) /* Sets ch = z, decreases to a */
	{
		putchar(ch); /* Prints ch in reverse (decrement) mode */
	}
	putchar('\n'); /* Print new line after loop*/
	return (0);
}
