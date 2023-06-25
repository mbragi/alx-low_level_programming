#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * This function generates a random number and determines if it is positive,
 * negative, or zero. The random number is stored in the variable 'n', and its
 * value is printed along with the corresponding sign.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("%d is ", n); /* Print the number */

    if (n > 0)
    {
        printf("positive\n");
    }
    else if (n == 0)
    {
        printf("zero\n");
    }
    else
    {
        printf("negative\n");
    }

    return 0;
}

