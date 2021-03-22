#include "lists.h"
/**
 *free_listint2- free's listint_t and sets the head to NULL
 *@head: a ptr tp the listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
