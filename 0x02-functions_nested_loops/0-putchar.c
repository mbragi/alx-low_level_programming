#include <unistd.h>

/**
 * print - Prints a character to the standard output
 * @c: The character to be printed
 *
 * Return: 1 on success, -1 on error
 */
int print(char c)
{
	return write(1, &c, 1);
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	print('_');
	print('p');
	print('u');
	print('t');
	print('c');
	print('h');
	print('a');
	print('r');
	print('\n');

	return 0;
}

