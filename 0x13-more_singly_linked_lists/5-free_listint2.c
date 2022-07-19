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

while (ptr != NULL)
{
ptr = ptr->next;
free(head);
*head = ptr;
}
free(head);
head = NULL;
}
