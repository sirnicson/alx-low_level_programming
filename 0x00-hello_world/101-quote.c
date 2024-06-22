#include <stdio.h>

/**
 * main - Entry point of the program
 * .....
 * Description: Prints a specific message to the standard error
 * Return: Always 1 (Failure)
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fwrite(msg, sizeof(char), sizeof(msg) - 1, stderr);
	return (1);
}
