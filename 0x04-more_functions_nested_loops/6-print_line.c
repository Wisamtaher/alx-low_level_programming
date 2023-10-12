#include "main.h"

/**
 * print_line - main function
 * @n: number of times the character
 * Return: int
 */

void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			putchar('_');
			n--;
		}
		putchar('\n');
	}
}
