#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n)
 * @head: first node in list
 *
 * Return: sum on success else 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
