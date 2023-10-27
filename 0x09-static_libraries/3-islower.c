#include "main.h"

/**
 * _islower - check for lower case
 * @c: Charecter to check
 * Return: 1 for lower case or 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
