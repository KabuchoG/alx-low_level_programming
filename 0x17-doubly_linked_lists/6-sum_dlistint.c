#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data n in the doubly linked list
 * @head: pointer to the first element of the list
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *h = head;
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (h != NULL)
	{
	sum += +h->n;
	h = h->next;
	}
	return (sum);
}
