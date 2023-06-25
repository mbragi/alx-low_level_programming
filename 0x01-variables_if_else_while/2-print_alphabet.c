#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints the alphabet in lowercase using the `putchar` function.
 * It initializes a variable `letter` with the lowercase letter 'a' and then
 * uses a `for` loop to iterate through the alphabet until it reaches 'z'. Inside
 * the loop, each lowercase letter is printed using the `putchar` function. Finally,
 * a newline character is printed using `putchar` to add a new line after printing
 * the alphabet.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }

    putchar('\n');

    return 0;
}

