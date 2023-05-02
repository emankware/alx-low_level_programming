#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: first node
 * @index: index of the node, starting at 0
 *
 * Return:NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node = head;


	for (i = 0; node != NULL && i < index; i++)
		node = node->next;


	if (i == index)
		return (node);


	return (NULL);
}
