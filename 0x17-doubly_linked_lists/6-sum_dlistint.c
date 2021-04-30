#include "lists.h"
/**
 *sum_dlistint- gives the sum of of all the data.
 *@head: a ptr the dlistint_t list
 *Return: the sum of the data if it is empty 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
