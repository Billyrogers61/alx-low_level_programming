#include "lists.h"

/**
 * list_len - Linked list function to count the number of elements in the list.
 * @h: variable pointer to a defined linked_list structure.
 *
 * Description: Count elements in the list and return value.
 * Return: Number of elements of size_t type.
 */
size_t list_len(const list_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
