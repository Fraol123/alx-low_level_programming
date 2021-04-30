#include "lists.h"

/**
 *add_dnodeint_end-insert node at the end of doubly linked list
 *@head: a ptr to the doubly linked list
 *@n: data
 *Return: new node address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *traverse;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (*head == NULL)
	{

		newnode->next = *head;
		newnode->prev = NULL;
		*head = newnode;
	}
	else
	{
		traverse = *head;
		while (traverse->next != NULL)
			traverse = traverse->next;
		newnode->next = NULL;
		newnode->prev = traverse;
		traverse->next = newnode;
	}
	return (newnode);
}

