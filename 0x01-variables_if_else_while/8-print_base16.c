#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all the numbers of base 16 in lowercase,
 *              followed by a new line. It only uses the putchar function
 *              and all the code is contained within the main function.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}

