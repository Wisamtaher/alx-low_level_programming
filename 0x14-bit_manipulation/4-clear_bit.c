#include "main.h"

/**
 * clear_bit - sets value bit - 0
 * @n: pointer
 * @index: index bit
 * Return: 1 correct else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n & ~(unsigned long int)(1 << index);
	return (1);
}
