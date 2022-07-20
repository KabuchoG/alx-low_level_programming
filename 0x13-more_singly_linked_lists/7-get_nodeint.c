#include "lists.h"
/**
 * get_nodeint_at_index - returns a node at a given index
 * @head: pointer to the first node
 * @index: the indexx position
 * Return: the node data
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *ptr = head;
unsigned int i = 0;

if (head == NULL)
	return (NULL);
for (i = 0; i < index; i++)
{
if (index == 0)
	return (ptr);
ptr = ptr->next;
if (ptr == NULL)
	return (NULL);
}
ptr = ptr->next;
if (ptr == NULL)
{
return (NULL);
}
else
{
return (ptr);
}
}
