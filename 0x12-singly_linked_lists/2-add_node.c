#include "lists.h"
/**
 * _strlen - Function to find the length of a string.
 * @str: string.
 *
 * Return: length of string (int).
 */
int _strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * add_node - Function to add a node to the beginning of linked list.
 * @head: Beginning of the linked list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = (list_t*)malloc(sizeof(list_t));
	if (temp == NULL)
		return NULL;
	temp->next = *head;
	temp->str = strdup(str);
	temp->len = _strlen(str);
	*head = temp;
	return(*head);
}
