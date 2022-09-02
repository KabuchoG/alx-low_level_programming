#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at an index
 * @h: pointer to pointer to the first element of a list
 * @idx: positional index where to insert
 * @n: the data
 * Return: return the adress of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h;
	unsigned int i = 0;
	dlistint_t *tmp;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	tmp = ptr;
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
		add_dnodeint(h, n);
	while (ptr->next != NULL )
{
	if (i == idx)
	{
	tmp->next = new;
	ptr->prev = new;
	new->prev = tmp;
	new->next = ptr;
	return (new);
	}
	ptr = ptr->next;
	tmp = ptr->prev;
	i++;
}
	if (i == idx)
{
		add_dnodeint_end(h, n);
}
	return (NULL);
}
