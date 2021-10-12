#include "lists.h"

/**
 * add_nodeint - pointer to a function to add a node to the beginning of
 * a linked-list.
 * @head: Pointer to first node on the list.
 * @n: interger value to be added.
 *
 * Return: If success: Address of the new element.
 *         If fail: NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
