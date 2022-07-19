#include "lists.h"
/**
 * pop_listint - deletes the headnode of a list
 * @head: pointer to the first node of a list
 *
 * Return: the valuse of n
 */
int pop_listint(listint_t **head)
{
listint_t *ptr = *head;
int n = ptr->n;

if (head == NULL)
{
	free(head);
	return (0);
}
ptr = ptr->next;
free(head);
return (n);
}
