#include "lists.h"
/**
 *pop_listint- deletes listint_t first element
 *@head: a ptr tp the listint_t list
 *Return:the heads data (n)node
 */

int pop_listint(listint_t **head)
{
	int new;
	listint_t *temp;


	if (*head == NULL)
		return (0);



		temp = *head;
		new = (*head)->n;
		*head = (*head)->next;

		free(temp);

		return (new);

}
