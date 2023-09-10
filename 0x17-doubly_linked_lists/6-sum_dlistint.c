#include "lists.h"

/**
 * sum_dlistint -function returns the sum of all the data in a linked list
 * @head:the pointer to the head of the list
 *
 * Return: 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
