#include "lists.h"
#include <string.h>
/**
 *add_node - adds a new node at the begining
 *         - of list_t list
 *@head: a ptr to the head of list_t list
 *@str:the string to be added to list_t list
 *
 *Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *nptr;

	nptr = malloc(sizeof(list_t));
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
	nptr->next = *head;

		*head = nptr;
	return (nptr);
}
