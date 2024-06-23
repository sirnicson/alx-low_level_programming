#include <stdio.h> /* i-o library for printing */

/**
 * main - Entry point of program
 * ...
 * Description: Prints all single digits of base 10
 * Starting from 0
 * Followed by a newline
 * ...
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n; /* Declare variable n of type int */

	for (n = 0; n < 10; n++) /* Sets n to 0, increases upto 9 */
	{
		printf("%d", n); /* Prints current value of n */
	}

	printf("\n"); /* adds newline after loop ends */
	return (0);
}
