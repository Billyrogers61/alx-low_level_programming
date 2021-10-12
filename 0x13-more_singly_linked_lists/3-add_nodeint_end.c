#include "lists.h"

/**
 * add_nodeint_end - Pointer to a function to add a node to the end of
 *                   a linked list.
 * @head: pointer to a pointer to the first node.
 * @n: Interger value to be added at the end of the linked-list.
 *
 * Return: If success: Address to the new element.
 *         If fail: NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	(void)temp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}

	return (*head);
}
