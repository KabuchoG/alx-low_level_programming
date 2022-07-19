#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: double pointer to the first element of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *ptr = *head;
listint_t *pos = ptr;

while (ptr != NULL)
{
ptr = ptr->next;
free(pos);
pos = ptr;
}
free(pos);
free(head);
*head = NULL;
}
