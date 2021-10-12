#include "lists.h"

/**
 * print_listint - Function that prints all elements of a linked-list.
 * @h: pointer to a linked-list.
 *
 * Description: Functions should print all elements and count no of nodes.
 * Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
