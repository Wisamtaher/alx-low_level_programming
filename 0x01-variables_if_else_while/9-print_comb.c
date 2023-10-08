#include <stdio.h>

/**
 * main - entry point
 * Description: all possible combinations of single-digit numbers.
 * Return: zero
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
