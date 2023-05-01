
#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end
 * of a listint_t list
 * @head: head
 * @n: new node to be inserted
 *
 * Return:address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last;
	listint_t *temp = *head;

	last = malloc(sizeof(listint_t));
	if (!last)
		return (NULL);

	last->n = n;
	last->next = NULL;

	if (*head == NULL)
	{
		*head = last;
		return (last);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = last;

	return (last);
}
