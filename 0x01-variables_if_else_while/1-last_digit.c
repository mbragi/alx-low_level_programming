#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * This function generates a random number and determines the last digit of that
 * number. It then prints the number and provides information about the last digit.
 * The variable 'n' stores the random number, and its value is printed along with
 * the analysis of the last digit.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
    int n, lastDigit;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("Last digit of %d is ", n); /* Print the number */

    lastDigit = abs(n % 10);

    if (lastDigit > 5)
    {
        printf("%d and is greater than 5\n", lastDigit);
    }
    else if (lastDigit == 0)
    {
        printf("%d and is 0\n", lastDigit);
    }
    else
    {
        printf("%d and is less than 6 and not 0\n", lastDigit);
    }

    return 0;
}

