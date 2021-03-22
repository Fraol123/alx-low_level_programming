#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end  of a list_t list
 *@head: a ptr to the head of listint_t list
 *@n: the number to be added to the listint_t list
 *
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *nptr, *temp;

	nptr  = malloc(sizeof(listint_t));
	if (nptr == NULL)
		return (NULL);



	nptr->n = n;
	nptr->next = NULL;

	if (*head == NULL)
		*head = nptr;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = nptr;
	}
	return (*head);
}
