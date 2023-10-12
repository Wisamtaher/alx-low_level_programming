#include "main.h"

/**
 * print_triangle - main function
 * @size: is the size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j > i; j--)
		{
			putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
