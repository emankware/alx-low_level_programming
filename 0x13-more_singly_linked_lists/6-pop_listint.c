#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: pointer to the first element in the linked list
 * Return:  the head node’s data (n).
*/
int pop_listint(listint_t **head)
{
	listint_t *hold;
	int exst_data;

	if (*head == NULL)
		return (0);

	hold = *head;
	*head = hold->next;
	exst_data = hold->n;
	free(hold);

	return (exst_data);

}
