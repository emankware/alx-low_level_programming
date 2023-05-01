#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the end of a listint_t list
 * @head: this is a pointer to the first node in the list
 * @n: new node to be inserted
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
