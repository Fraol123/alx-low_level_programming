#include <stdio.h>
#include "lists.h"
/**
 *dlistint_len-prints number of elements in doubly linked list
 *@h: the ptr to doubly linked list
 *Return: the number of element in the doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter;

	for (counter = 0; h != NULL; counter++)
		h = h->next;

	return (counter);
}
