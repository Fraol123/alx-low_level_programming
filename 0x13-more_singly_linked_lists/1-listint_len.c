#include "lists.h"

/**
 *listint_len- counts the number of nodes
 *@h:ptr to the starting of the list
 *
 *Return: the amount of elemnts in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
