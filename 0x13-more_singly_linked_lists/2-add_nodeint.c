#include "lists.h"

/**
 *add_nodeint - adds a new node at the begining
 *         - of listint_t list
 *@head: a ptr to the head of list_t list
 *@n:the number to be added to listint_t list
 *
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{


	listint_t *nptr;

	nptr = malloc(sizeof(listint_t));
	if (nptr == NULL)
		return (NULL);

	nptr->n = n;
	nptr->next = *head;

	*head = nptr;
	return (nptr);
}
