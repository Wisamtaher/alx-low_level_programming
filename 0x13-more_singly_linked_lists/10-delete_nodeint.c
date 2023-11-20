#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node
 * @head: pointer
 * @index: index
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current, *temp;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (current != NULL && i < index - 1)
	{
		current = current->next;
		i++;
	}
	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}
	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
