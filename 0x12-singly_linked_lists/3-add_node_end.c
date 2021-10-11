#include "lists.h"

/**
 * _strlen - Function to return the lenght of a string.
 * @str: string.
 *
 * Return: Length of string.
 */
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * add_node_end - Function to add a new node to the end of linked list.
 * @head: Beginning of the linked list.
 * @str: The string to be added to the list_t list.
 *
 * Return: Pointer to a the last node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *lastNode;

	newNode = (list_t *)malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = _strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		lastNode = *head;

		while (lastNode->next != NULL)
			lastNode = lastNode->next;
		lastNode->next = newNode;
	}
	return (newNode);
}
