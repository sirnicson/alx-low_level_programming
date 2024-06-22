#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point, generates a random number and prints its last digit.
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("Last digit of %d ", n);

    // Get the last digit of n
    int last_digit = abs(n) % 10;

    if (last_digit > 5)
        printf("is greater than 5\n");
    else if (last_digit == 0)
        printf("is 0\n");
    else
        printf("is less than 6 and not 0\n");

    return (0);
}
