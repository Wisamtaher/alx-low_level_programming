#include "function_pointers.h"

/**
 * array_iterator - function
 * @array: variable
 * @size: variable
 * @action: variable
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end;

	end = array + size - 1;

	if (array && size && action)
	{
		while (array <= end)
		{
			action(*array++);
		}
	}
}
