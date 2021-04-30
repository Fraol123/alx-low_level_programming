#include "lists.h"
/**
 *insert_dnodeint_at_index- inserts node anywear.
 *@h: a ptr to ptr the listint_t list
 *@idx: is the index of the node, starting at 0
 *@n: the integer for the new node to contain
 *Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *newnode;
	dlistint_t *traverse;
	unsigned int pos;

	if (h == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *h;
		newnode->prev = NULL;
		if (newnode->next != NULL)
			newnode->next->prev = newnode;
		*h = newnode;
	}
	else
	{
		traverse = *h;
		for (pos = 0; traverse != NULL && pos < (idx - 1); pos++)
			traverse = traverse->next;
		if (traverse == NULL)
		{
			free(newnode);
			return (NULL);
		}
		newnode->next = traverse->next;
		newnode->prev = traverse;
		if (traverse->next != NULL)
			traverse->next->prev = newnode;
		traverse->next = newnode;
	}
	return (newnode);

}
