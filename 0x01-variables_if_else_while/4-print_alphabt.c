#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the alphabet in lowercase, excluding the
 *              letters 'q' and 'e', followed by a new line. It uses the
 *              `putchar` function to print each character of the alphabet.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
    char lowercase;

    for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
    {
        if (lowercase != 'q' && lowercase != 'e')
        {
            putchar(lowercase);
        }
    }

    putchar('\n');

    return 0;
}

