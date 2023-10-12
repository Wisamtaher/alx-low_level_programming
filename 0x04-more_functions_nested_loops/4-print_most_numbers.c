#include "main.h"

/**
 * print_most_numbers - Main function
 *
 * Return: zero
 */

void print_most_numbers(void)
{
	char d;

	for (d = '0'; d <= '9'; d++)
	{
		if (d != '2' && d != '4')
		{
			putchar(d);
		}
	}
	putchar('\n');
}
