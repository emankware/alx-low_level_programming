#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: points the first node in the list
 * @index: index of node to be  deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node, *erase_node;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		erase_node = *head;
		*head = (*head)->next;
		free(erase_node);
		return (1);
	}

	prev_node = *head;
	erase_node = (*head)->next;

	while (index > 1 && erase_node != NULL)
	{
		prev_node = erase_node;
		erase_node = erase_node->next;
		index--;
	}

	if (erase_node == NULL)
		return (-1);

	prev_node->next = erase_node->next;
	free(erase_node);

	return (1);
}
