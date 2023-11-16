#include "lists.h"

/**
 * list_len - No. elements
 * @h: ointer
 * Return: No. elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
