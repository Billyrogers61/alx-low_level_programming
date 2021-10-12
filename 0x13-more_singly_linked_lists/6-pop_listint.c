#include "lists.h"

/**
 * pop_listint - Function to delete the head of a linked-list.
 * @head: Pointer to a pointer to the first node.
 *
 * Return: If linked-list empty - 0
 *         Otherwise - head's node data.
 */
int pop_listint(listint_t **head)
{
	int head_data;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	head_data = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (head_data);
}
