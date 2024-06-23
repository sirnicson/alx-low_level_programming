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

/**
 * Character Conversion: 
 * To print using putchar, convert integers
 * to their corresponding ASCII characters
 * by adding the ASCII value of '0'.
 * Character '0': ASCII value is 48.
 * Character '1': ASCII value is 49.
 * Character '2': ASCII value is 50.
 * Character '3': ASCII value is 51.
 * Character '4': ASCII value is 52.
 * Character '5': ASCII value is 53.
 * Character '6': ASCII value is 54.
 * Character '7': ASCII value is 55.
 * Character '8': ASCII value is 56.
 * Character '9': ASCII value is 57.
 */
