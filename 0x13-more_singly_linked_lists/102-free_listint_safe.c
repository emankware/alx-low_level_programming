#include "lists.h"

/**
 * free_listint_safe - function that prints a listint_t linked list
 * @h: points to the first node in the linked list
 *
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *current, *next;

	if (!h || !*h)
		return (0);

	current = *h;
	while (current)
	{
		len++;
		next = current->next;
		free(current);
		if (next >= current)
			break;
		current = next;
	}

	*h = NULL;

	return (len);
}
