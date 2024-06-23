#include <stdio.h>

/**
 * main - Entry into the program
 *
 * Description: Prints all  combinations of three digits
 * Combinantions are seprated by ,
 * Print only the smallest combination of three digits
 * Should be printed in ascending order
 * Combinations should be different
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;
	
	for (a = 0; a < 10; a++) /* Loop 0 to 9 for first digit */
	{
		for (b = 0; b < 10; b++) /* Loop 0 to 9 for second digit */
		{
			for (c = 0; c < 10; c++) /* Loop 0 to 9 for third digit */
			{
				if (a < b && b < c) /*Unique and ascendin */
				{
					putchar(a + '0'); /* Print firs a */
					putchar(b + '0'); /* Print second b */
					putchar(c + '0'); /* Print third c */
					if (a != 7 || b != 8 || c != 9) /* 789 Combo */
					{
						putchar(','); /* Print comma */
						putchar(' '); /* Print space */
					}
				}
			}
		}
	}
	putchar('\n'); /* Print newline at the end */
	return (0);
}
