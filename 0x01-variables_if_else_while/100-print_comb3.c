#include <stdio.h>

/**
 * main - Entry into the program
 *
 * Description: Prints possible combinations
 * of two digits numbers.
 * The two digits must be different
 * Should be printed in ascending order 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int e, i; /*Declare variables e and i, of type int*/

	for (e = 0; e < 10; e++) /*Loops from 0 to 9 for e */
	{
		for (i = 0; i < 10; i++) /*Loops from 0 to 9 for i*/
		{
			if (e < i) /*First digit less than second digit*/
			{
				putchar(e + '0'); /*Prints e if e < i*/
				putchar(i + '0'); /*Prints i if e < i */
				if (e != 8 &&  i != 9)/*To avoid printing comma after the last combination*/
				{
					putchar(',');/*Print spac*/
					putchar(' ');
				}
			}
		}
		putchar('\n');/*Print newline at the end*/
		return (0);
	}
}
