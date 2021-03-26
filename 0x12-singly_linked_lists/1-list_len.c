#include "lists.h"
/**
 * list_len - Get the number of elements in a list.
 * @h: Head  of the list.
 * Return: the number of elemants.
 */
size_t list_len(const list_t *h)
{
	int size = 0;

	while (h)
	{
		if (h->str != NULL)
			size++;
		h = h->next;
	}

	return (size);
}
