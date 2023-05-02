#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - this Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *nodeA, *nodeB;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	nodeA = head->next;
	nodeB = head->next->next;

	while (nodeB != NULL)
	{
		if (nodeA == nodeB)
		{
			nodeA = head;
			while (nodeA != nodeB)
			{
				nodes++;
				nodeA = nodeA->next;
				nodeB = nodeB->next;
			}

			nodeA = nodeA->next;
			while (nodeA != nodeB)
			{
				nodes++;
				nodeA = nodeA->next;
			}

			return (nodes);
		}

		nodeA = nodeA->next;
		nodeB = nodeB->next->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: points to the first node in the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			nodes++;
		}
	}
	else
	{
		size_t j = 0;

		while (j < nodes)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			j++;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
