#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node of the list
 * @idx: index position
 * @n: value of the new node
 * Return: adress of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *ptr = *head;
listint_t *new = malloc(sizeof(listint_t));
listint_t *pos = ptr;
unsigned int i;

new->n = n;
if (*head == NULL)
{
	free(new);
	return (NULL);
}
for (i = 0; i < idx; i++)
{
if (idx == 0)
{
	new->next = *head;
	*head = new;
	return (new);
}
pos = ptr;
ptr = ptr->next;
if (ptr == NULL)
{
	free(new);
	return (NULL);
}
new->next = ptr;
pos->next = new;
return (new);
}
}
