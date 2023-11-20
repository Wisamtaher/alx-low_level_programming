#include "lists.h"

/**
 * sum_listint - returns the sum
 * @head: pointer
 * Return: sum of the data or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
