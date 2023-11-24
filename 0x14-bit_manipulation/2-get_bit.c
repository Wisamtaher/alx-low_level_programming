#include "main.h"

/**
 * get_bit - return value - bit
 * @n: number check
 * @index: index of bit
 * Return: value of bit - specified index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
