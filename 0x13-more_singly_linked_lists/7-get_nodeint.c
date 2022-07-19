#include "lists.h"
/**
 * get_nodeint_at_index - returns a node at a given index
 * @head: pointer to the first node
 * @index: index of the node to be returned
 * Return: the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *ptr = head;

while (ptr != NULL)
{
if (i == index)
{
return(ptr);
break;
}
ptr = ptr->next;
i++;
}
if (index > i)
	return (NULL);
}
