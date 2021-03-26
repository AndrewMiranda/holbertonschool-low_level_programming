#include "lists.h"
/**
 * free_list - free a list_t list.
 * @head: contents of linked list starting from the given node.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
