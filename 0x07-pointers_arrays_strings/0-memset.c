#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory
 * @s: area pointer
 * @b: constant byte
 * @n: number of bytes to be changed
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)

{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
