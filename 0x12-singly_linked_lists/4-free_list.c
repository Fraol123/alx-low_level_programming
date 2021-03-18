#include "lists.h"
/**
 *free_list- free's mallov'd struct and str used to create lists
 *@head: a ptr tp the list_t list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
