#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: pointer to the dfirst element of a list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *h = head;

while (head != NULL)
{
head = h->next;
free(h);
h = head;
}
free(head);
}
