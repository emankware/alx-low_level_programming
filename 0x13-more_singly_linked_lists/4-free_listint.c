#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: head of linked lists
 *
 */
void free_listint(listint_t *head)
{
	listint_t *hold;

	while (head != NULL)
	{
		hold = head;
		head = head->next;
		free(hold);
	}

}
