#include <stdio.h>

/**
 * main - Entry of the program
 * ...
 * Description: Print all numbers of base 16 in lowercase
 * Starting from 0
 * Followed by a new line
 * ...
 * Note: Base 16 = 0123456789ABCDEF (where A-F = 10-15)
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n; /* Declare variable n of type int */
	char ch; /* Declare variable ch of typre char*/
	
	for (n = 0; n < 10; n++) /*Sets n to 0, increases to 9 */
	{
		putchar(n + '0'); /*Prints n to equate ASCII xter*/
	}
	
	for (ch = 'a'; ch <= 'f'; ch++) /*Sets ch to a, increases to f*/
	{
		putchar(ch); /*Prints ch in  increment mode*/
	}
	
	putchar('\n'); /* Print new line after loop*/
	return (0);
}
