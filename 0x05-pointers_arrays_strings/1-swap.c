#include "main.h"

/**
 * swap_int - main function
 * @a: variable
 * @b:variable
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
