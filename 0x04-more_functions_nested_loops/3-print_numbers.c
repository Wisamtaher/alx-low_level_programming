#include "main.h"

/**
 * print_numbers - Main function
 * Return: zero
 */

void print_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9' ; digit++)
	{
		putchar(digit);
	}

	putchar('\n');
}
