#include "lists.h"

/**
 * free_list - Function to free a linked list.
 * @head: pointer to head of list.
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(temp->str);
		head = head->next;
		free(temp);
	}
}
