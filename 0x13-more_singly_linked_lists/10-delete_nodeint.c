#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at a specified index
 * @head: pointer to the adress of the first node
 * @index: index of the node to be deleted
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *ptr = *head;
listint_t *pos = ptr;
unsigned int i = 0;

if (head == NULL)
{
	free(head);
	return (1);
}
while (ptr != NULL)
{
if (i == index)
{
ptr = ptr->next;
free(pos);
return (1);
break;
}
ptr = ptr->next;
pos = ptr;
i++;
}
if (index > i)
	return (-1);
}
