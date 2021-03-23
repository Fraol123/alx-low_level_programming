#include "lists.h"
/**
 *delete_nodeint_at_index- unction that deletes the node at index.
 *@head: a ptr to ptr the listint_t list
 *@index:the node that should be deleted. Index starts at 0
 *Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *temp;
	unsigned int pos;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	current = *head;
	pos = 0;
	if (index == 0)
	{
		*head = (*head)->next;
	}
	else
	{
		while (pos < (index - 1))
		{
			if (current == NULL)
				return (-1);
			current = current->next;
			pos++;
		}
		temp = current;
		current = current->next;
		temp->next = current == NULL ? NULL : current->next;
	}
	free(current);
	return (1);
}
