#include "lists.h"
/**
 *get_nodeint_at_index- gives the nth node of a listint_t linked list.
 *@head: a ptr the listint_t list
 *@index: is the index of the node, starting at 0
 *Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
