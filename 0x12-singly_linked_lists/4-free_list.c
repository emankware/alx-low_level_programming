#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Write a function that frees a list_t list.
 * @head: contants address of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
