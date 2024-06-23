#include <stdio.h>

/**
 * main - Entry into the program
 * Description: Prints all possible combinations
 * of two two-digit numbers.
 * The combinations must be in ascending order.
 * Numbers should be printed with two digits.
 * Numbers must be separated by a comma followed by a space.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int t1, u1, t2, u2;

	for (t1 = 0; t1 < 10; t1++) /* Loop for tens digit of first number */
	{
		for (u1 = 0; u1 < 10; u1++) /* Loop for unit digit of first number */
		{
			for (t2 = t1; t2 < 10; t2++) /* Loop t2, starts from t1 */
			{
				/* Start u2 from 0 if it's the same tens digit, otherwise start from u1 */
				int start_u2 = (t1 == t2) ? u1 : 0;

				for (u2 = start_u2; u2 < 10; u2++) /* Loop for u2 */
				{
					/* Skip printing the same number (e.g., 00 00) */
					if (t1 == t2 && u1 == u2)
						continue;

					/* Print the first number */
					putchar(t1 + '0');
					putchar(u1 + '0');

					/* Print the second number */
					putchar(' ');
					putchar(t2 + '0');
					putchar(u2 + '0');

					/* Check if it's not the last combination */
					if (!(t1 == 9 && u1 == 8 && t2 == 9 && u2 == 9))
					{

						/* Print comma and space */
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	
	/* Print newline at the end */
	putchar('\n');
	return (0);
}
