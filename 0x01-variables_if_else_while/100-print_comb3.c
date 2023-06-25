#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible different combinations of two
 *              digits in ascending order. The numbers are separated by ", "
 *              and are printed using the putchar function. All the code is
 *              contained within the main function.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
	int tens_digit;
	int ones_digit;

	for (tens_digit = 0; tens_digit <= 8; tens_digit++)
	{
		for (ones_digit = tens_digit + 1; ones_digit <= 9; ones_digit++)
		{
			putchar(tens_digit + '0');
			putchar(ones_digit + '0');

			if (tens_digit != 8 || ones_digit != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

