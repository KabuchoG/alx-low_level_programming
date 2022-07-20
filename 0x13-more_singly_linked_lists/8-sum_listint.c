#include "lists.h"
/**
 * sum_listint - sums the dara in all the nodes of the list
 * @head: pointer to the first node of the list
 * Return: the sum of the node data
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *ptr = head;

while (ptr != NULL)
{
	sum += ptr->n;
	ptr = ptr->next;
}
return (sum);
}
