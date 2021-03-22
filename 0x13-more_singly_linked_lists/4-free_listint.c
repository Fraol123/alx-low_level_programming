#include "lists.h"
/**
 *free_listint- free's listint_t
 *@head: a ptr tp the listint_t list
 */
void free_listint(listint_t *head)
{
	 listint_t *temp;


	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
