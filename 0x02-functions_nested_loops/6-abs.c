#include "main.h"

/**
 * _abs - compute absolute value of an integer
 * @c: The number to compute
 * Return: Absolute value of number 0
 */

int _abs(int c)
{
	int abs;

	if (c < 0)
	{
		abs = c * -1;
		return (abs);
	}
	return (c);
}
