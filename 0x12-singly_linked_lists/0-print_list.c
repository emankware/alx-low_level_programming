#include "lists.h"

/**
 * print_list -function that prints all the elements of a list_t list.
 * @h: the  head of list
 * Return: number of nodes printed
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
