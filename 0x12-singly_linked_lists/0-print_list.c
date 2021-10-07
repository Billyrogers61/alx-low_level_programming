#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - Function to print all elements in a list.
 * @h: linked list pointer of defined structure type.
 *
 * Description: Print every element in the list if not NULL and count number
 * of nodes in the linked list.
 * Return: Number of nodes.
 */
size_t print_list(const list_t *h)
{
	unsigned int num;

	for (num = 0; h->next != NULL; num++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (num);
}
