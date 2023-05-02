#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list.
 * @head: points to the first node in a list
 * Return: The address of the node where loop starts,  NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *start, *finish;

	if (head == NULL)
		return (NULL);

	start = head;
	finish = head;

	while (finish != NULL && finish->next != NULL)
	{
		start = start->next;
		finish = finish->next->next;

		if (start == finish)
		{
			start = head;

			while (start != finish)
			{
				start = start->next;
				finish = finish->next;
			}

			return (start);
		}
	}

	return (NULL);
}
