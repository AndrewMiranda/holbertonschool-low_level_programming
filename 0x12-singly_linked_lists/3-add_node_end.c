#include "lists.h"
/**
 * add_node_end - add a new node at the end of a list_t list.
 * @head: contents of linked list starting from the given node.
 * @str: is the string to will be save in the node.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *tmp = strdup(str);
	list_t *newNode = malloc(sizeof(list_t)); /* 1. allocate node */
	list_t *last = *head; /* used in step 5*/

	if (newNode == NULL || tmp == NULL)
	{
		free(newNode);
		return (NULL);
	}
	/* 2. put in the data  */
	newNode->str = tmp;
	newNode->len = _strlen(newNode->str);

	/* 3. This new node is going to be the last node, so make next of it as NULL*/
	newNode->next = NULL;

	/* 4. If the Linked List is empty, then make the new node as head */
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	/* 5. Else traverse till the last node */
	else
	{
		while (last->next != NULL)
			last = last->next;
		/* 6. Change the next of last node */
		last->next = newNode;
		return (newNode);
	}
	return (NULL);
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
