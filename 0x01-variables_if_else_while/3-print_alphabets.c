#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the alphabet in lowercase, followed by
 *              the alphabet in uppercase, and then a new line. It uses the
 *              `putchar` function to print each character of the alphabet.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
    char lowercase;
    char uppercase;

    for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
    {
        putchar(lowercase);
    }

    for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
    {
        putchar(uppercase);
    }

    putchar('\n');

    return 0;
}

