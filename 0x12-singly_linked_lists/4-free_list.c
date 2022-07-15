#include "lists.h"
/**
 * free_list - frees an entire list
 * @head: pointer to the firsst element of a list
 * Return: void
 */
void free_list(list_t *head)
{
list_t *ptr = head;
while (ptr != NULL)
{
	ptr = ptr->next;
	free(head->str);
	free(head);
	head = ptr;
}
}
