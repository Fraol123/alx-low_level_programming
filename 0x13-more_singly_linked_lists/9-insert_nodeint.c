#include "lists.h"
/**
 *insert_nodeint_at_index- inserts node anywear.
 *@head: a ptr to ptr the listint_t list
 *@idx: is the index of the node, starting at 0
 *@n: the integer for the new node to contain
 *Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *newnode;
	listint_t *current;
	unsigned int pos;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		pos = 0;
		current = *head;
		while (pos  < (idx - 1))
		{
			if (current == NULL)
			{
				free(newnode);
				return (NULL);
			}
			current = current->next;
			pos++;
		}
		newnode->next = current->next;
		current->next = newnode;
	}
	newnode->n = n;
	return (newnode);
}
