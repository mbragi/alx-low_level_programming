#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet in reverse,
 *              followed by a new line. It only uses the putchar function
 *              and all the code is contained within the main function.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
	char letter = 'z';

	putchar(letter);
	putchar('\n');

	for (; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}

