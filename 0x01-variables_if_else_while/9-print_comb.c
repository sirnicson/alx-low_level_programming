#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combination of
 * of single digit numbers
 * followed by a space.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n; /*Declare variable n of type n*/

	for (n = 0; n < 10; n++) /*Loops from 0 to 9*/
	{
		putchar(n + '0'); /*Prints digits 0 to 9 - ASCII*/
		if (n != 9) /*If n is not 9, print comma and space*/
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
