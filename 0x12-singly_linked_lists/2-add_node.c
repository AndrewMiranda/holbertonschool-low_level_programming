#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: contents of linked list starting from the given node.
 * @str: is the string to will be save in the node.
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *tmp = strdup(str);
	list_t *newNode = NULL;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL || tmp == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->str = tmp;
	newNode->len = _strlen(newNode->str);
	newNode->next = (*head);
	(*head) = newNode;

	return (newNode);
}

/**
 * _strlen - return the length of a string
 * @s: is a string
 * Return: length of s
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
