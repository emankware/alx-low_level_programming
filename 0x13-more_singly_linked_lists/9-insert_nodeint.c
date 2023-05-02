#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts new node at a given position
 * @head: points at firt node in the list
 * @idx: index of the new node
 * @n: data of new mode
 * Return: address of the new node,NULL if otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev, *curr;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;


	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}


	prev = NULL;
	curr = *head;
	for (i = 0; i < idx && curr != NULL; i++)
	{
		prev = curr;
		curr = curr->next;
	}

	if (curr == NULL && i < idx)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = curr;
	prev->next = new_node;


	return (new_node);

}
