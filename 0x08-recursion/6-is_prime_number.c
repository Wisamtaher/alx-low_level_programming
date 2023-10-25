#include "main.h"

/**
 * is_prime_number - function
 * @n: variable
 * Return: void
 */

int is_prime_number(int n)
{
	int i;

	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}

	return (1);
}
