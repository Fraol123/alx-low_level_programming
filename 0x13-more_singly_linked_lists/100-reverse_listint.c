#include "lists.h"
/**
 *reverse_listint- reverses the list.
 *@head:a ptr to ptr the listint_t list
 *Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{

	listint_t *prevnode;
	listint_t *current;
	listint_t *nextnode;

	prevnode = 0;
	current = nextnode = *head;
	while (nextnode != 0)
	{
		nextnode = nextnode->next;
		current->next = prevnode;
		prevnode = current;
		current = nextnode;
	}

	*head = prevnode;
	return (*head);
}
