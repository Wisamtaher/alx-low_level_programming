#include <stdio.h>

/**
 * main - entry point
 * Description: alphabet in lowercase, and then in uppercase.
 * Return: zero
 */

int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		n++;
	}
	putchar('\n');
	return (0);
}
