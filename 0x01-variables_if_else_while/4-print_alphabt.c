#include <stdio.h> /* Input-output library needed for putchar */

/**
 * main - Entry point of the program
 * ...
 * Description: Prints alphabets in lowercase (!q&e)
 * Followed by a new line
 * ...
 * Return: Always 0 (Success)
 */

int main(void) /* Entry point takes no argument(void) */
{
	char ch = 'a'; /* declares variable ch of type char*/
			/* and initializes to a*/

	while (ch<= 'z') /* iterates along as ch<=z */
	{
		if (ch != 'e' && ch != 'q') /* checks ch !=e&q */
		{
			putchar(ch); /* prints ch if ch !=e&q */
		}
		ch++; /* ch goes up by 1, a,b,c */
	}
	putchar('\n'); /* prints & moves cursor to the next line*/
	return (0);
}
