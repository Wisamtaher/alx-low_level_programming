#include "main.h"

/**
 * _sqrt_recursion - function
 * @n: variable
 * Return: void
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int i;


		for (i = 1; i <= n / 2; i++)
		{
			if (i * i == n)
			{
				return (i);
			}
			else if (i * i > n)
			{
				break;
			}
		}
		return (-1);
	}
}
