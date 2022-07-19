#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: double pointer to the first element of the list
 * Return
 * ; void
 */
void free_listint2(listint_t **head)
{
listint_t *ptr = *head;

if (head = NULL)
	free (head);
while (ptr != NULL)
{
*head = ptr;
ptr = ptr->next;
free(head);
}
head = NULL;
}
