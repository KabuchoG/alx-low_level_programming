#include "lists.h"
/**
 * insert_nodeint_at_index - adds a node at a specified index idx
 * @head: pointer to the first element of the list
 * @idx: index point to add a node
 * @n: value of the new node
 * Return; a pointer to the adress of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *ptr = *head;
listint_t *new = malloc(sizeof(listint_t));

if (new == NULL)
{
	free(new);
	return (NULL);
}
new->n = n;
if (head == NULL)
{
	new->next = NULL;
	*head = new;
}
while (ptr != NULL)
{
if (i == idx)
{
new->next = ptr->next;
ptr->next = new;
return (new);
break;
}
ptr = ptr->next;
i++;
}
if (idx > i)
return (NULL);
}
