#include "main.h"

/**
 * _isalpha - check alphebetic character
 * @c: character to be checked
 * Return: 1 for alphebetic character or 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
