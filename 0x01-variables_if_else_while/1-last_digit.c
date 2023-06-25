#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* betty style doc for function main goes there */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("%d ", n); /* Print the number */

    if (n > 0)
    {
        printf("is positive");
    }
    else if (n < 0)
    {
        printf("is negative");
    }
    else
    {
        printf("is zero");
    }

    printf("\n");

    return (0);
}

