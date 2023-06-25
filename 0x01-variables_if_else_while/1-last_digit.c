#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * This function generates a random number 'n' and calculates its last digit.
 * It then prints the value of 'n' and provides information about its last digit.
 * If the last digit is greater than 5, it prints that it is greater than 5.
 * If the last digit is 0, it prints that it is 0.
 * Otherwise, it prints that it is less than 6 and not 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;
    int lastDigit;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("n = %d\n", n); /* Print the number */

    lastDigit = abs(n % 10);

    if (lastDigit > 5)
    {
        printf("The last digit of n is %d and is greater than 5\n", lastDigit);
    }
    else if (lastDigit == 0)
    {
        printf("The last digit of n is %d and is 0\n", lastDigit);
    }
    else
    {
        printf("The last digit of n is %d and is less than 6 "
               "and not 0\n", lastDigit);
    }

    return (0);
}

