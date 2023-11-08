#include "function_pointers.h"

/**
 * print_name - function
 * @f: variable
 * @name: variable
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
