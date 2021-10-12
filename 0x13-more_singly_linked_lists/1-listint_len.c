#include "lists.h"

/**
 * listint_len - Function to count and return no of elemnts in a linked-list.
 * @h: pointer to a linked-list.
 *
 * Description: Count the number of elements in the list.
 * Return: Number of elememts.
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes;

	num_nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
