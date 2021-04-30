#include "lists.h"
/**
 *get_dnodeint_at_index- gives the nth node of doubly linked list.
 *@head: a ptr the doubly linked list
 *@index: is the index of the node, starting at 0
 *Return: the nth node of a listint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;


	while (count < index)
	{
		if (head == NULL)
			return (NULL);
		count++;
		head  = head->next;
	}
	return (head);
}
