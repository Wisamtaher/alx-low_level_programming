#include <stdio.h>

/**
 * main - entry point
 * Description: prints the alphabet in lowercase
 * Return: zero
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
