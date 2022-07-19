#include "lists.h"
/**
 * sum_listint - sums all the data n in a list
 * @head: pointer to the fist node
 * Return: sum of the n data
 */
int sum_listint(listint_t *head)
{
listint_t *ptr = head;
int sum = 0;
if (ptr == NULL)
return (0);
while (ptr != NULL)
{
ptr = ptr->next;
sum += ptr->n;
}
return (sum);
}
