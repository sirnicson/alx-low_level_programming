#include <stdio.h>

/**
 * main - Entry into the program
 *
 * Description: Prints the smallest combination of two digits
 * Should be printed in ascending order
 * Combinations should be different 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int e, i;
	for (e = 0; e < 10; e++) /* Loop from 0 to 9 for e */
	{
		for (i = 0; i < 10; i++) /* Loop from 0 to 9 for i */
		{
			if (e < i) /* Ensure the first digit is less than the second */
			{
				putchar(e + '0'); /* Print digit e */
				putchar(i + '0'); /* Print digit i */
				if (!(e == 8 && i == 9)) /* Avoid printing comma and space after the last combination */
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n'); /* Print newline at the end */
	return (0);
}
