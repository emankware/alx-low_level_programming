#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint -  a function that reverses a listint_t linked list
 * @head: double points to the first node
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev = NULL;

	while (*head)
		{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);

}
