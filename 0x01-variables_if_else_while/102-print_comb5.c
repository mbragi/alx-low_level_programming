#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of two two-digit
 *              numbers in ascending order. The numbers are separated by a
 *              space, and all numbers are printed with two digits. The
 *              combinations are separated by a comma, followed by a space.
 *              The code uses the putchar function to print the numbers and
 *              follows the constraints provided.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 != 98 || num2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

