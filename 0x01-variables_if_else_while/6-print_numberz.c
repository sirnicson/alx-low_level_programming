#include <stdio.h>

/**
 * main - Entry of the program
 * ...
 * Description: Print all single number of base 10
 * Starting from 0
 * Followed by a new line
 * ...
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n; /* Declare variable n of type int */

	for (n = 0; n < 10; n++) /* Sets n to 0, increases to 9 */
	{
		putchar(n + '0'); /* Prints n to equate ASCII xter*/
	}

	putchar('\n'); /* Print new line after loop*/
	return (0);
}
