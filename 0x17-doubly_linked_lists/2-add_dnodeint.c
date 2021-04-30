#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *add_dnodeint-insert node at the begining
 *@head: a ptr to the doubly linked list
 *@n: data
 *Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;

	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
