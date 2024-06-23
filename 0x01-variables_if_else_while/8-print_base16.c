#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints all numbers of base 16 in lowercase
 * Starting from 0, followed by a new line
 * Base 16 = 0123456789abcdef (where a-f = 10-15)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n; /* Declare variable n of type int */
	char ch; /* Declare variable ch of type char */

	for (n = 0; n < 10; n++) /* Loop from 0 to 9 */
	{
		putchar(n + '0'); /* Print digits 0-9 in ASCII xters */
	}
	for (ch = 'a'; ch <= 'f'; ch++) /* Loop from 'a' to 'f' */
	{
		putchar(ch); /* Print characters 'a' to 'f' */
	}
	putchar('\n'); /* Print new line */
	return (0);
}
