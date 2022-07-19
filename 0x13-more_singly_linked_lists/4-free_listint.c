#include "lists.h"
/**
 * free_listint - frees a list
 * @head: pointer to the first element of alist
 * Return: void
 */
void free_listint(listint_t *head)
{
listint_t *ptr = head;

if (head == NULL)
	free(head);
while (ptr != NULL)
{
ptr = ptr->next;
free(head);
head = ptr;
}
free(head);
}
