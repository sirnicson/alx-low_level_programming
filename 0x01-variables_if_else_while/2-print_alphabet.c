#include <stdio.h>

/**
 * main - Entry point of the program
 * ..............
 * Description: Prints alphabets in lover case,
 * Followed by a new line
 * ..............
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
