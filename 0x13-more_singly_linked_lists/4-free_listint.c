#include "lists.h"

/**
 * free_listint - Function to free a list.
 * @head: Pointer to the first node.
 *
 * Descrription: Create a function to free each node in the list.
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
