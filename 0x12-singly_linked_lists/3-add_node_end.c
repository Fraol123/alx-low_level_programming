#include "lists.h"
#include <string.h>
/**
 *add_node_end - adds a new node at the end  of a list_t list
 *@head: a ptr to the head of list_t list
 *@str: the string to be added to the list_t list
 *
 *Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *nptr, *temp;

	nptr  = malloc(sizeof(list_t));
	if (nptr == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(nptr);
		return (NULL);
	}
	for (len = 0; str[len]; len++)
	{
		;
	}

	nptr->str = dup;
	nptr->len = len;
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
